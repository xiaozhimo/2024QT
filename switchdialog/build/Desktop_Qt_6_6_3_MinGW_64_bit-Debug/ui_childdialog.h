/********************************************************************************
** Form generated from reading UI file 'childdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHILDDIALOG_H
#define UI_CHILDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ChildDialog
{
public:
    QLabel *label;
    QPushButton *enterMainBtn;
    QPushButton *exitBtn;

    void setupUi(QDialog *ChildDialog)
    {
        if (ChildDialog->objectName().isEmpty())
            ChildDialog->setObjectName("ChildDialog");
        ChildDialog->resize(400, 300);
        label = new QLabel(ChildDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 40, 69, 19));
        enterMainBtn = new QPushButton(ChildDialog);
        enterMainBtn->setObjectName("enterMainBtn");
        enterMainBtn->setGeometry(QRect(200, 180, 93, 28));
        exitBtn = new QPushButton(ChildDialog);
        exitBtn->setObjectName("exitBtn");
        exitBtn->setGeometry(QRect(60, 180, 93, 28));

        retranslateUi(ChildDialog);
        QObject::connect(enterMainBtn, &QPushButton::clicked, ChildDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ChildDialog);
    } // setupUi

    void retranslateUi(QDialog *ChildDialog)
    {
        ChildDialog->setWindowTitle(QCoreApplication::translate("ChildDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ChildDialog", "\350\277\231\346\230\257\345\255\220\347\252\227\345\217\243", nullptr));
        enterMainBtn->setText(QCoreApplication::translate("ChildDialog", "\351\200\200\345\207\272", nullptr));
        exitBtn->setText(QCoreApplication::translate("ChildDialog", "\350\277\233\345\205\245\344\270\273\347\225\214\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChildDialog: public Ui_ChildDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHILDDIALOG_H
