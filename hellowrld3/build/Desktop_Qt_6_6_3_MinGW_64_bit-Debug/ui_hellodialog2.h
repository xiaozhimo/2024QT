/********************************************************************************
** Form generated from reading UI file 'hellodialog2.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLODIALOG2_H
#define UI_HELLODIALOG2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_helloDialog2
{
public:
    QLabel *label;

    void setupUi(QDialog *helloDialog2)
    {
        if (helloDialog2->objectName().isEmpty())
            helloDialog2->setObjectName("helloDialog2");
        helloDialog2->resize(400, 300);
        label = new QLabel(helloDialog2);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 20, 271, 19));

        retranslateUi(helloDialog2);

        QMetaObject::connectSlotsByName(helloDialog2);
    } // setupUi

    void retranslateUi(QDialog *helloDialog2)
    {
        helloDialog2->setWindowTitle(QCoreApplication::translate("helloDialog2", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("helloDialog2", "\347\225\214\351\235\242\350\256\276\350\256\241\345\270\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class helloDialog2: public Ui_helloDialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLODIALOG2_H
