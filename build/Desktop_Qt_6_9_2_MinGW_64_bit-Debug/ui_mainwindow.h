/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gameWidget;
    QLabel *player1display;
    QLabel *player2display;
    QWidget *buttonGrid;
    QGridLayout *gridLayout;
    QPushButton *bottomMiddle;
    QPushButton *middleLeft;
    QPushButton *topRight;
    QPushButton *bottomLeft;
    QPushButton *topMiddle;
    QPushButton *bottomRight;
    QPushButton *middleRight;
    QPushButton *topLeft;
    QPushButton *middle;
    QLabel *stalemateMsg;
    QWidget *menuWidget;
    QTextEdit *player1name;
    QTextEdit *player2name;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *menuHeaderBox;
    QLabel *menuHeader;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *menuButtons;
    QPushButton *play;
    QPushButton *quit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(490, 460);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icon/xo.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gameWidget = new QWidget(centralwidget);
        gameWidget->setObjectName("gameWidget");
        gameWidget->setGeometry(QRect(0, -1, 491, 441));
        player1display = new QLabel(gameWidget);
        player1display->setObjectName("player1display");
        player1display->setGeometry(QRect(10, 10, 241, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        player1display->setFont(font);
        player1display->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        player2display = new QLabel(gameWidget);
        player2display->setObjectName("player2display");
        player2display->setGeometry(QRect(240, 10, 241, 31));
        player2display->setFont(font);
        player2display->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        buttonGrid = new QWidget(gameWidget);
        buttonGrid->setObjectName("buttonGrid");
        buttonGrid->setGeometry(QRect(10, 40, 470, 401));
        buttonGrid->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(buttonGrid);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        gridLayout->setContentsMargins(9, 9, -1, -1);
        bottomMiddle = new QPushButton(buttonGrid);
        bottomMiddle->setObjectName("bottomMiddle");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bottomMiddle->sizePolicy().hasHeightForWidth());
        bottomMiddle->setSizePolicy(sizePolicy1);
        bottomMiddle->setMinimumSize(QSize(149, 126));
        QFont font1;
        font1.setPointSize(52);
        font1.setBold(true);
        bottomMiddle->setFont(font1);
        bottomMiddle->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(bottomMiddle, 2, 1, 1, 1);

        middleLeft = new QPushButton(buttonGrid);
        middleLeft->setObjectName("middleLeft");
        sizePolicy1.setHeightForWidth(middleLeft->sizePolicy().hasHeightForWidth());
        middleLeft->setSizePolicy(sizePolicy1);
        middleLeft->setMinimumSize(QSize(149, 126));
        middleLeft->setFont(font1);
        middleLeft->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(middleLeft, 1, 0, 1, 1);

        topRight = new QPushButton(buttonGrid);
        topRight->setObjectName("topRight");
        sizePolicy1.setHeightForWidth(topRight->sizePolicy().hasHeightForWidth());
        topRight->setSizePolicy(sizePolicy1);
        topRight->setMinimumSize(QSize(149, 126));
        topRight->setFont(font1);
        topRight->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(topRight, 0, 2, 1, 1);

        bottomLeft = new QPushButton(buttonGrid);
        bottomLeft->setObjectName("bottomLeft");
        sizePolicy1.setHeightForWidth(bottomLeft->sizePolicy().hasHeightForWidth());
        bottomLeft->setSizePolicy(sizePolicy1);
        bottomLeft->setMinimumSize(QSize(149, 126));
        bottomLeft->setFont(font1);
        bottomLeft->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(bottomLeft, 2, 0, 1, 1);

        topMiddle = new QPushButton(buttonGrid);
        topMiddle->setObjectName("topMiddle");
        sizePolicy1.setHeightForWidth(topMiddle->sizePolicy().hasHeightForWidth());
        topMiddle->setSizePolicy(sizePolicy1);
        topMiddle->setMinimumSize(QSize(149, 126));
        topMiddle->setFont(font1);
        topMiddle->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(topMiddle, 0, 1, 1, 1);

        bottomRight = new QPushButton(buttonGrid);
        bottomRight->setObjectName("bottomRight");
        sizePolicy1.setHeightForWidth(bottomRight->sizePolicy().hasHeightForWidth());
        bottomRight->setSizePolicy(sizePolicy1);
        bottomRight->setMinimumSize(QSize(149, 126));
        bottomRight->setFont(font1);
        bottomRight->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(bottomRight, 2, 2, 1, 1);

        middleRight = new QPushButton(buttonGrid);
        middleRight->setObjectName("middleRight");
        sizePolicy1.setHeightForWidth(middleRight->sizePolicy().hasHeightForWidth());
        middleRight->setSizePolicy(sizePolicy1);
        middleRight->setMinimumSize(QSize(149, 126));
        middleRight->setFont(font1);
        middleRight->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(middleRight, 1, 2, 1, 1);

        topLeft = new QPushButton(buttonGrid);
        topLeft->setObjectName("topLeft");
        sizePolicy1.setHeightForWidth(topLeft->sizePolicy().hasHeightForWidth());
        topLeft->setSizePolicy(sizePolicy1);
        topLeft->setMinimumSize(QSize(149, 126));
        topLeft->setFont(font1);
        topLeft->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(topLeft, 0, 0, 1, 1);

        middle = new QPushButton(buttonGrid);
        middle->setObjectName("middle");
        sizePolicy1.setHeightForWidth(middle->sizePolicy().hasHeightForWidth());
        middle->setSizePolicy(sizePolicy1);
        middle->setMinimumSize(QSize(149, 126));
        middle->setFont(font1);
        middle->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(middle, 1, 1, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setRowStretch(2, 1);
        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 1);
        stalemateMsg = new QLabel(gameWidget);
        stalemateMsg->setObjectName("stalemateMsg");
        stalemateMsg->setGeometry(QRect(170, 10, 151, 31));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        stalemateMsg->setFont(font2);
        stalemateMsg->setAlignment(Qt::AlignmentFlag::AlignCenter);
        menuWidget = new QWidget(centralwidget);
        menuWidget->setObjectName("menuWidget");
        menuWidget->setGeometry(QRect(-1, -1, 491, 441));
        player1name = new QTextEdit(menuWidget);
        player1name->setObjectName("player1name");
        player1name->setGeometry(QRect(10, 250, 121, 41));
        player1name->setFont(font);
        player2name = new QTextEdit(menuWidget);
        player2name->setObjectName("player2name");
        player2name->setGeometry(QRect(360, 250, 121, 41));
        player2name->setFont(font);
        verticalLayoutWidget_2 = new QWidget(menuWidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(0, 90, 491, 111));
        menuHeaderBox = new QVBoxLayout(verticalLayoutWidget_2);
        menuHeaderBox->setObjectName("menuHeaderBox");
        menuHeaderBox->setContentsMargins(0, 0, 0, 0);
        menuHeader = new QLabel(verticalLayoutWidget_2);
        menuHeader->setObjectName("menuHeader");
        QFont font3;
        font3.setPointSize(40);
        font3.setBold(true);
        menuHeader->setFont(font3);
        menuHeader->setAlignment(Qt::AlignmentFlag::AlignCenter);

        menuHeaderBox->addWidget(menuHeader);

        verticalLayoutWidget = new QWidget(menuWidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(140, 200, 211, 141));
        menuButtons = new QVBoxLayout(verticalLayoutWidget);
        menuButtons->setObjectName("menuButtons");
        menuButtons->setContentsMargins(0, 0, 0, 0);
        play = new QPushButton(verticalLayoutWidget);
        play->setObjectName("play");
        play->setFont(font);

        menuButtons->addWidget(play);

        quit = new QPushButton(verticalLayoutWidget);
        quit->setObjectName("quit");
        quit->setFont(font);

        menuButtons->addWidget(quit);

        MainWindow->setCentralWidget(centralwidget);
        menuWidget->raise();
        gameWidget->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 490, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Tic-Tac-Toe", nullptr));
        player1display->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        player2display->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        bottomMiddle->setText(QString());
        middleLeft->setText(QString());
        topRight->setText(QString());
        bottomLeft->setText(QString());
        topMiddle->setText(QString());
        bottomRight->setText(QString());
        middleRight->setText(QString());
        topLeft->setText(QString());
        middle->setText(QString());
        stalemateMsg->setText(QString());
        player1name->setPlaceholderText(QCoreApplication::translate("MainWindow", "Player 1: X", nullptr));
        player2name->setPlaceholderText(QCoreApplication::translate("MainWindow", "Player 2: O", nullptr));
        menuHeader->setText(QCoreApplication::translate("MainWindow", "Tic-Tac-Toe", nullptr));
        play->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        quit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
