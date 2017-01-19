#ifndef SUBMIT_H
#define SUBMIT_H

#include <QDialog>

namespace Ui {
class submit;
}

class submit : public QDialog
{
    Q_OBJECT

public:
    explicit submit(QWidget *parent = 0);
//explicit submit(const int &marks, QObject *parent = 0);

   /* explicit submit(const int &counta, QObject *parent = 0);
    explicit submit(const int &countc, QObject *parent = 0);*/

    Ui::submit *ret(){
        return ui;
    }

    ~submit();

private slots:
    void on_label_result_linkActivated(const QString &link);

    void on_pushButton_clicked();

    void on_pushButton_clicked(bool checked);

private:
    //int marks;

    Ui::submit *ui;

};

#endif // SUBMIT_H
