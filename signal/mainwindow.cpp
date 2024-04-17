#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->showChildButton,&QPushButton::clicked,this,&MainWindow::showChildDialog);
}

MainWindow::~MainWindow()
{
    delete ui;
}


