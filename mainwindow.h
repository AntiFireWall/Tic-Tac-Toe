#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QButtonGroup>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_play_clicked();
    void xoButtonClickHandler(int id);

private:
    Ui::MainWindow *ui;
    QButtonGroup *xoButtons;
    void victoryDisplay();
    void stalemateDisplay();

};
#endif // MAINWINDOW_H
