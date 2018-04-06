#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
 bool event(QEvent *ev); //所有窗口都可以用到Event函数，因为所有的消息传递过程都需要经过该Event


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
