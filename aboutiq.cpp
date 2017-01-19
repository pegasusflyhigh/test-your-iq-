#include "aboutiq.h"
#include "ui_aboutiq.h"\
#include "testtest.h"

aboutiq::aboutiq(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aboutiq)
{
    ui->setupUi(this);
    QPixmap bkgnd("/home/bhuvna/Desktop/test.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);


}

aboutiq::~aboutiq()
{
    delete ui;
}



