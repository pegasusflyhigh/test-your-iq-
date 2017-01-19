#include "submit.h"
#include "ui_submit.h"

#include "testtest.h"




submit::submit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::submit)
{
    ui->setupUi(this);
    this->setWindowTitle("SCORE CARD ~~~~ ");
    QPixmap bkgnd("/home/bhuvna/projects/submit.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
    ui->progressBar->hide();
    ui->progressBar_r->hide();
    ui->label_2->hide();
    ui->label_3->hide();




}

submit::~submit()
{
    delete ui;
}




