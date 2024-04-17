#ifndef CHILDDIALOG_H
#define CHILDDIALOG_H

#include <QDialog>

namespace Ui {
class childDialog;
}

class childDialog : public QDialog
{
    Q_OBJECT

public:
    explicit childDialog(QWidget *parent = nullptr);
    ~childDialog();
signals:
    void showMainSig();
public slots:
    void showMainWindow();
private:
    Ui::childDialog *ui;
    QWidget* _parent;
};

#endif // CHILDDIALOG_H
