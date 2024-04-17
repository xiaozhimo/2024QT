#include<QApplication>
#include<QDialog>
#include<QLabel>
#include"hellodialog.h"
#include"hellodialog2.h"
int main(int argc,char* argv[]){
    QApplication a(argc,argv);
    // QDialog w;
    // QLabel label(&w);
    // label.setText("hello1111");
    // w.resize(400,300);
    // label.move(120,120);
    // Ui::Dialog ui;
    // ui.setupUi(&w);

    // w.show();
    helloDialog2 dialog;
    dialog.show();
    return a.exec();
}
