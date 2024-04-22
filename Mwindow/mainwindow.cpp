#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include<QTextEdit>
#include<QMdiSubWindow>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionshowdock_D_triggered()
{
    qDebug()<<"显示dock widget"<<Qt::endl;
    ui->dockWidget_3->show();
}


void MainWindow::on_actionNew_N_triggered()
{
    QTextEdit *textEdit=new QTextEdit(this);
    auto childWindow=ui->mdiArea->addSubWindow(textEdit);
    childWindow->setWindowTitle(tr("文本"));
    childWindow->show();

}

