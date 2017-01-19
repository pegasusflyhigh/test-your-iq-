#ifndef TESTTEST_H
#define TESTTEST_H

#include <QDialog>

namespace Ui {
class testtest;
}

class testtest : public QDialog
{
    Q_OBJECT

public:
    explicit testtest(QWidget *parent = 0);
    ~testtest();

private slots:
    void on_radioButton_1_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

    void on_pushButton_prev_clicked();

    void on_pushButton_next_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_submit_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton__clicked();

private:
    Ui::testtest *ui;
};
class iqt{
public :

    int a;
    int c;
    int no;
    int mm;
    int flag;
    QString ques;
    QString op1;
    QString op2;
    QString op3;
    QString op4;
    iqt()
    { a=0;
        c=0;
        mm=0;
        flag=0;
        ques = "empty";
        op1 = "empty";
        op2 = "empty";
        op3 = "empty";
        op4 = "empty";


    }
};

#endif // TESTTEST_H
