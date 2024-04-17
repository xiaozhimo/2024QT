#ifndef HELLODIALOG_H
#define HELLODIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class helloDialog;
}
QT_END_NAMESPACE

class helloDialog : public QDialog
{
    Q_OBJECT

public:
    helloDialog(QWidget *parent = nullptr);
    ~helloDialog();

private:
    Ui::helloDialog *ui;
};
#endif // HELLODIALOG_H
