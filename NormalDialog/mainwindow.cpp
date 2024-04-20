#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QColorDialog>
#include<QDebug>
#include<QDir>
#include<QFileDialog>
#include<QInputDialog>
#include<QMessageBox>
#include<QProgressDialog>
#include<QWizard>
#include<QVBoxLayout>
#include<QLabel>
#include<QButtonGroup>
#include<QRadioButton>
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


void MainWindow::on_pushButton_8_clicked()
{
    QWizard wizard(this);
    wizard.setWindowTitle(tr("向导"));
    auto page1=new QWizardPage();
    page1->setTitle(tr("婚恋介绍程序"));
    auto label1=new QLabel();
    label1->setText(tr("帮助你找恋人"));
    auto layout=new QVBoxLayout();
    layout->addWidget(label1);
    page1->setLayout(layout);
    wizard.addPage(page1);
    QWizardPage *page2=new QWizardPage();
    page2->setTitle("选择你喜欢的类型");
    auto group=QButtonGroup(page2);
    auto btn1=new QRadioButton();
    btn1->setText("白马王子");
    group.addButton(btn1);
    auto btn2=new QRadioButton();
    btn2->setText("温柔");
    group.addButton(btn2);
    auto btn3=new QRadioButton();
    btn3->setText("可爱");
    group.addButton(btn3);
    auto layout2=new QVBoxLayout();
    for(int i=0;i<group.buttons().size();i++){
        layout2->addWidget(group.buttons()[i]);
    }
    page2->setLayout(layout2);
    wizard.addPage(page2);

    QWizardPage* page3=new QWizardPage();
    page3->setTitle("你的缘分到了");
    auto label3=new QLabel();
    label3->setText("感谢参与");
    QVBoxLayout* layout3=new QVBoxLayout();
    layout3->addWidget(label3);
    page3->setLayout(layout3);
    wizard.addPage(page3);
    wizard.show();
    wizard.exec();

}

