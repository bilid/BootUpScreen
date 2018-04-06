#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QTextEdit"
#include "QDateTime"
#include "QCoreApplication"
#include <QDebug>
#include <QMouseEvent>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPushButton *button =new QPushButton(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::event(QEvent *ev)
{
    if(ev->type() == QEvent::MouseButtonPress)
    {
//        QMouseEvent *ev1 = (QMouseEvent *)ev;
//                if(ev1->type() == QMouseEvent::MouseButtonPress)
//                {
//                    qDebug()<<"mouse pressed!";
//                }

        //没有这个也行
          qDebug()<<"mouse pressed!";
    }

    return QWidget::event(ev);
}


bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{

}
