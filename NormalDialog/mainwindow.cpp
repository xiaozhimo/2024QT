#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QColorDialog>
#include<QDebug>
#include<QDir>
#include<QFileDialog>
#include<QInputDialog>
#include<QMessageBox>
#include<QProgressDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _counter=0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QColorDialog colorDlg(Qt::blue,this);
    colorDlg.setOption(QColorDialog::ShowAlphaChannel);
    colorDlg.exec();
    QColor color=colorDlg.currentColor();
    qDebug()<<color<<Qt::endl;
}


void MainWindow::on_pushButton_2_clicked()
{
    QString path=QDir::currentPath();
    QString title=tr("文本对话框");
    QString filter=tr("文本文件(*.txt);;图片文件(*.jpg *.gif *.png);;所有文件(*.*)");
    QString aFileName=QFileDialog::getOpenFileName(this,title,path,filter);
    qDebug()<<aFileName;
}


void MainWindow::on_pushButton_3_clicked()
{
    bool ok=false;
    auto intdata=QInputDialog::getInt(this,tr("数字输入对话框"),tr("请输入数字"),200,-200,400,10,&ok);
    if(ok){
        qDebug()<<"ok";
    }
}


void MainWindow::on_pushButton_4_clicked()
{
    bool ok=false;
    auto intdata=QInputDialog::getDouble(this,tr("浮点输入对话框"),tr("请输入浮点数字"),0.1,-2,4,2,&ok);
    if(ok){
        qDebug()<<intdata;
    }
}


void MainWindow::on_pushButton_5_clicked()
{
    QStringList items;
    items<<tr("条目1")<<tr("条目2");
    bool ok=false;
    auto itemData= QInputDialog::getItem(this,tr("条目对话框"),tr("选择输入条目"),items,0,true,&ok);
    if(ok){
        qDebug()<<itemData;
    }
}


void MainWindow::on_pushButton_6_clicked()
{
   auto ret= QMessageBox::question(this,tr("提问对话框"),tr("你吃了吗？"));
    if(ret==QMessageBox::Yes){
       qDebug()<<"吃了";

    }else{
        return;
    }
    auto ret2=QMessageBox::information(this,tr("通知对话框"),tr("吃了就好"),QMessageBox::Yes);
   if(ret2==QMessageBox::Yes){
        qDebug()<<ret2;
   }else{
       return;
   }
   auto ret3=QMessageBox::warning(this,tr("警告对话框"),tr("没吃赶快吃"),QMessageBox::Yes);
   if(ret3==QMessageBox::Yes){
       qDebug()<<ret3;
   }else{
       return;
   }
   auto ret4=QMessageBox::critical(this,tr("关键对话框"),tr("没吃赶快吃"),QMessageBox::Yes);
   if(ret4==QMessageBox::Yes){
       qDebug()<<ret4;
   }else{
       return;
   }

}


void MainWindow::on_pushButton_7_clicked()
{
    _progressDialog= new QProgressDialog(tr("正在复制"),tr("取消赋值"),0,5000,this);
    _progressDialog->setWindowTitle(tr("文件复制对话框"));
    _progressDialog->setWindowModality(Qt::ApplicationModal);
    _timer=new QTimer(this);
    connect(_timer,&QTimer::timeout,this,&MainWindow::on_updateProgressDialog);
    connect(_progressDialog,&QProgressDialog::canceled,this,&MainWindow::on_cancelProgressDialog);
    _timer->start(2);
}
void MainWindow::on_updateProgressDialog(){
    _counter++;
    if(_counter>5000){
        _timer->stop();
        delete _timer;
        _timer=nullptr;
        delete _progressDialog;
        _counter=0;
        return;
    }
    _progressDialog->setValue(_counter);
}

void MainWindow::on_cancelProgressDialog()
{
    _timer->stop();
    delete _timer;
    _timer=nullptr;
    delete _progressDialog;
    _counter=0;
    return;

}

