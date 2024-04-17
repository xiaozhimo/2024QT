#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDialog>
#include<QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // QDialog w(this);
    // w.show();
    // qDebug() <<"helllllllll11333" <<Qt::endl;
    auto w=new QDialog(this);

    w->setWindowFlag(Qt::WindowStaysOnTopHint);
    w->show();
    // QDialog w;
    // w.exec();
}

MainWindow::~MainWindow()
{
    delete ui;
}
