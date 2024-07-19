#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include<QTextEdit>
#include<QMdiSubWindow>
#include<QMenu>
#include<QIcon>
#include<QKeySequence>
#include<QActionGroup>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMenu *editMenu=ui->menubar->addMenu(tr("编辑(&E)"));
    editMenu->addSeparator();
    auto action_Open =editMenu->addAction(QIcon(":/res/252a54de_E776297_69cf2d91.png"),tr("打开文件(&O)"));
    action_Open->setShortcut(QKeySequence("Ctr+O"));
    connect(action_Open,&QAction::triggered,this,&MainWindow::on_actionEdit_triggered);
    QActionGroup *group=new QActionGroup(this);
    QAction * action_L= group->addAction(tr("左对齐(&L)"));
    action_L->setCheckable(true);
    QAction * action_R= group->addAction(tr("左对齐(&R)"));
    action_R->setCheckable(true);
    QAction * action_C= group->addAction(tr("居中(&L)"));
    action_C->setCheckable(true);
    editMenu->addSeparator();
    editMenu->addAction(action_L);
    editMenu->addAction(action_R);
    editMenu->addAction(action_C);

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

void MainWindow::on_actionEdit_triggered()
{
    qDebug()<<"打开文件了";

}

