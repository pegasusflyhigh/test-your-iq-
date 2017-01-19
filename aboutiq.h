#ifndef ABOUTIQ_H
#define ABOUTIQ_H

#include <QDialog>

namespace Ui {
class aboutiq;
}

class aboutiq : public QDialog
{
    Q_OBJECT

public:
    explicit aboutiq(QWidget *parent = 0);
    ~aboutiq();

private slots:
    void on_pushButton_clicked();

private:
    Ui::aboutiq *ui;
};

#endif // ABOUTIQ_H
