#include "maindialog.h"
#include "ui_maindialog.h"
#include"childdialog.h"
MainDialog::MainDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MainDialog)
{
    ui->setupUi(this);
}

MainDialog::~MainDialog()
{
    delete ui;
}

void MainDialog::on_enterChildBtn_clicked()
{
    close();
    ChildDialog childDialog;
    if(childDialog.exec()==QDialog::Accepted){
        this->show();

    }else{
        return;
    }

}

