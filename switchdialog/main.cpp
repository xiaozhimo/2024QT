#include "maindialog.h"
#include<QDebug>
#include <QApplication>
#include"childdialog.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainDialog w;
    ChildDialog childDialog;
    auto res=childDialog.exec();
    if( res==QDialog::Accepted){
        qDebug()<<"childDialog exec,res is"<<res<<Qt::endl;
        w.show();
        a.exec();
    }else{
        qDebug()<<"childDialog exit,res is"<<res<<Qt::endl;
        return 0;
    }

}
