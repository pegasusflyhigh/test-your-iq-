#include "about.h"
#include "ui_about.h"
#include "testtest.h"

about::about(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);
    QPixmap bkgnd("/home/bhuvna/projects/submit.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

about::~about()
{
    delete ui;
}

void about::on_pushButton_clicked()
{ testtest three;
    three.setModal(true);
    three.exec();

}
