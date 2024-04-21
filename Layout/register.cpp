#include "register.h"
#include "ui_register.h"
#include<QVBoxLayout>
#include<QLabel>
#include<QLineEdit>
#include<QPushButton>
#include"login.h"
Register::Register(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Register)
{
    ui->setupUi(this);
    this->setMaximumSize(QSize(400,550));
    this->setMinimumSize(QSize(400,550));
    auto vbox_layout=new QVBoxLayout();
    auto verticalSpacer1=new QSpacerItem(40,20,QSizePolicy::Minimum,QSizePolicy::Expanding);
    vbox_layout->addItem(verticalSpacer1);
    QLabel* name_label=new QLabel();
    auto name_item1=new QSpacerItem(40,20,QSizePolicy::Fixed,QSizePolicy::Minimum);
    auto name_item2=new QSpacerItem(40,20,QSizePolicy::Fixed,QSizePolicy::Minimum);

    name_label->setText(tr("邮箱："));
    QLineEdit *name_edit=new QLineEdit();
    auto name_layout=new QHBoxLayout();
    name_layout->addItem(name_item1);
    name_layout->addWidget(name_label);
    name_layout->addWidget(name_edit);
    name_layout->addItem(name_item2);
    vbox_layout->addLayout(name_layout);
    this->setLayout(vbox_layout);
    auto verticalSpacer2=new QSpacerItem(40,20,QSizePolicy::Maximum,QSizePolicy::Maximum);
    vbox_layout->addItem(verticalSpacer2);
    auto pwd_layout=new QHBoxLayout();
    auto pwd_item1=new QSpacerItem(40,20,QSizePolicy::Fixed,QSizePolicy::Minimum);
    auto pwd_item2=new QSpacerItem(40,20,QSizePolicy::Fixed,QSizePolicy::Minimum);
    QLabel *pwd_label=new QLabel();
    pwd_label->setText(tr("密码："));
    QLineEdit* pwd_edit=new QLineEdit();
    pwd_layout->addItem(pwd_item1);
    pwd_layout->addWidget(pwd_label);
    pwd_layout->addWidget(pwd_edit);
    pwd_layout->addItem(pwd_item2);
    vbox_layout->addLayout(pwd_layout);
    auto verticalSpacer3=new QSpacerItem(40,30,QSizePolicy::Fixed,QSizePolicy::Maximum);
    vbox_layout->addItem(verticalSpacer3);

    auto reg_btn=new QPushButton();
    reg_btn->setText(tr("注册"));
    auto reg_layout=new QHBoxLayout();
    auto reg_item1=new QSpacerItem(150,20,QSizePolicy::Fixed,QSizePolicy::Minimum);
    auto reg_item2=new QSpacerItem(150,20,QSizePolicy::Fixed,QSizePolicy::Minimum);
    reg_layout->addItem(reg_item1);
    reg_layout->addWidget(reg_btn,5);
    reg_layout->addItem(reg_item2);
    vbox_layout->addLayout(reg_layout);

    auto verticalSpacer4=new QSpacerItem(40,20,QSizePolicy::Fixed,QSizePolicy::Expanding);
    vbox_layout->addItem(verticalSpacer4);

    connect(reg_btn,&QPushButton::clicked,this,&Register::slot_register);

}

Register::~Register()
{
    delete ui;
}

void Register::set_login(const weak_ptr<Login> &login)
{
    _login=login;

}

void Register::slot_register()
{
    this->close();
    auto shared_login=_login.lock();
    shared_login->show();


}
