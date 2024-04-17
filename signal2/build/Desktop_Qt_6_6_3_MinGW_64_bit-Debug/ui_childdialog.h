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

class Ui_childDialog
{
public:
    QLabel *label;
    QPushButton *showMainButton;

    void setupUi(QDialog *childDialog)
    {
        if (childDialog->objectName().isEmpty())
            childDialog->setObjectName("childDialog");
        childDialog->resize(400, 300);
        label = new QLabel(childDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 40, 69, 19));
        showMainButton = new QPushButton(childDialog);
        showMainButton->setObjectName("showMainButton");
        showMainButton->setGeometry(QRect(90, 130, 93, 28));

        retranslateUi(childDialog);

        QMetaObject::connectSlotsByName(childDialog);
    } // setupUi

    void retranslateUi(QDialog *childDialog)
    {
        childDialog->setWindowTitle(QCoreApplication::translate("childDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("childDialog", "\345\255\220\347\225\214\351\235\242", nullptr));
        showMainButton->setText(QCoreApplication::translate("childDialog", "\346\230\276\347\244\272\344\270\273\347\252\227\345\217\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class childDialog: public Ui_childDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHILDDIALOG_H
