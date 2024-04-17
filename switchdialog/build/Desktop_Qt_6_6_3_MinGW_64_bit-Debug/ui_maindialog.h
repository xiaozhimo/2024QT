/********************************************************************************
** Form generated from reading UI file 'maindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINDIALOG_H
#define UI_MAINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MainDialog
{
public:
    QLabel *label;
    QPushButton *enterChildBtn;
    QPushButton *exitBtn;

    void setupUi(QDialog *MainDialog)
    {
        if (MainDialog->objectName().isEmpty())
            MainDialog->setObjectName("MainDialog");
        MainDialog->resize(800, 600);
        label = new QLabel(MainDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 100, 69, 19));
        enterChildBtn = new QPushButton(MainDialog);
        enterChildBtn->setObjectName("enterChildBtn");
        enterChildBtn->setGeometry(QRect(100, 200, 93, 28));
        exitBtn = new QPushButton(MainDialog);
        exitBtn->setObjectName("exitBtn");
        exitBtn->setGeometry(QRect(250, 200, 93, 28));

        retranslateUi(MainDialog);
        QObject::connect(exitBtn, &QPushButton::clicked, MainDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(MainDialog);
    } // setupUi

    void retranslateUi(QDialog *MainDialog)
    {
        MainDialog->setWindowTitle(QCoreApplication::translate("MainDialog", "MainDialog", nullptr));
        label->setText(QCoreApplication::translate("MainDialog", "\344\270\273\347\225\214\351\235\242", nullptr));
        enterChildBtn->setText(QCoreApplication::translate("MainDialog", "\350\277\233\345\205\245\345\255\220\347\225\214\351\235\242", nullptr));
        exitBtn->setText(QCoreApplication::translate("MainDialog", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainDialog: public Ui_MainDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDIALOG_H
