#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gameloophandler.h"
#include <QOverload>
#include <QProcess>
#include <QCoreApplication>
#include <QStringList>
#include <QTimer>
#include <QDebug>

GameLoopHandler glh;

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Setting the default window state.
    setFixedSize(width(), height());
    connect(ui->quit, &QPushButton::clicked, qApp, &QApplication::quit);
    ui->gameWidget->setVisible(false);

    // Adding buttons to a group and attaching it to a function(slot).
    xoButtons = new QButtonGroup(this);
    xoButtons->setExclusive(false);

    xoButtons->addButton(ui->topLeft, 1);
    xoButtons->addButton(ui->topMiddle, 2);
    xoButtons->addButton(ui->topRight, 3);
    xoButtons->addButton(ui->middleLeft, 4);
    xoButtons->addButton(ui->middle, 5);
    xoButtons->addButton(ui->middleRight, 6);
    xoButtons->addButton(ui->bottomLeft, 7);
    xoButtons->addButton(ui->bottomMiddle, 8);
    xoButtons->addButton(ui->bottomRight, 9);

    connect(xoButtons, &QButtonGroup::idClicked, this, &MainWindow::xoButtonClickHandler);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Displays the victory message.
void MainWindow::victoryDisplay() {
    if(glh.currentTurn()) {
        QString player1Victory = ui->player1display->text() + " <--- Winner!!";
        ui->player1display->setText(player1Victory);
        ui->player1display->setStyleSheet("color: red");
        ui->player2display->setStyleSheet("");
    } else {
        QString player2Victory =  + "Winner!! ---> " + ui->player2display->text();
        ui->player2display->setText(player2Victory);
        ui->player2display->setStyleSheet("color: cyan");
        ui->player1display->setStyleSheet("");
    }
}

// Displays the stalemate message.
void MainWindow::stalemateDisplay() {
    ui->player1display->setStyleSheet("");
    ui->player2display->setStyleSheet("");
    ui->stalemateMsg->setText("Stalemate");
}

void MainWindow::on_play_clicked()
{
    // Setting Players display names from user input or to "Player 1" or "Player 2" if there was no input.
    QString* player1 = new QString;
    *player1 = ui->player1name->toPlainText().size() != 0 ? ui->player1name->toPlainText() + ": X" : "Player 1: X";
    ui->player1display->setText(*player1);
    delete player1;
    QString* player2 = new QString;
    *player2 = ui->player2name->toPlainText().size() != 0 ? ui->player2name->toPlainText() + ": O" : "Player 2: O";
    ui->player2display->setText(*player2);
    delete player2;

    // Setting the Player 1 Display name to "current" turn.
    ui->player1display->setStyleSheet("color: red");

    // Resetting stalemateMsg text to empty.
    ui->stalemateMsg->setText("");

    // Hidding the menu and showing the game.
    ui->menuWidget->setVisible(false);
    ui->gameWidget->setVisible(true);
}

// Starts a new instance of the program and closes the old one.
void restartApplication() {
    QString program = QCoreApplication::applicationFilePath();
    QStringList arguments = QCoreApplication::arguments();
    QProcess::startDetached(program, arguments);
    QTimer::singleShot(100, QCoreApplication::instance(), &QCoreApplication::quit);
}

// This functions sets the button text to X or O based on whose turn it is and calls the processTurn function to run the game logic.
void MainWindow::xoButtonClickHandler(int id)
{
    // Only run the code below if victory has not been achived.
    if(!glh.isVictoryAchived()) {
        if(glh.currentTurn()) {
            xoButtons->button(id)->setText("X");
            xoButtons->button(id)->setStyleSheet("color: red;");
            xoButtons->button(id)->setEnabled(false);
            ui->player2display->setStyleSheet("color: cyan");
            ui->player1display->setStyleSheet("");
        } else {
            xoButtons->button(id)->setText("O");
            xoButtons->button(id)->setStyleSheet("color: cyan;");
            xoButtons->button(id)->setEnabled(false);
            ui->player1display->setStyleSheet("color: red");
            ui->player2display->setStyleSheet("");
        }
        // Is one of the players has won or there are no more turns left display the appropriate message. Then restart the program after 4 seconds.
        if(glh.processTurn(id)) {
            if(glh.isVictoryAchived()) {
                victoryDisplay();
            } else {
                stalemateDisplay();
            }
            QTimer::singleShot(4000, []() {restartApplication();});
        }
    }
}
