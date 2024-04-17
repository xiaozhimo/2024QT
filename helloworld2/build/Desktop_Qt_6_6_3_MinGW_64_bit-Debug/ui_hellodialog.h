/********************************************************************************
** Form generated from reading UI file 'hellodialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLODIALOG_H
#define UI_HELLODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_helloDialog
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *helloDialog)
    {
        if (helloDialog->objectName().isEmpty())
            helloDialog->setObjectName("helloDialog");
        helloDialog->resize(800, 600);
        pushButton = new QPushButton(helloDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(480, 410, 93, 28));
        label = new QLabel(helloDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 200, 200, 100));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(helloDialog);

        QMetaObject::connectSlotsByName(helloDialog);
    } // setupUi

    void retranslateUi(QDialog *helloDialog)
    {
        helloDialog->setWindowTitle(QCoreApplication::translate("helloDialog", "helloDialog", nullptr));
        pushButton->setText(QCoreApplication::translate("helloDialog", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("helloDialog", "hello World! hello QT!!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class helloDialog: public Ui_helloDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLODIALOG_H
