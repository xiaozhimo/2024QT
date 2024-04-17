#include "childdialog.h"
#include "ui_childdialog.h"
#include<QDebug>
ChildDialog::ChildDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ChildDialog)
{
    ui->setupUi(this);
}

ChildDialog::~ChildDialog()
{
    delete ui;
}




void ChildDialog::on_exitBtn_clicked()
{
    qDebug()<<"childDialog exec,res is"<<Qt::endl;
    accept();
}

