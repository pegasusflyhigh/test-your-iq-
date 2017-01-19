#include "welcome.h"
#include "ui_welcome.h"
#include "about.h"



welcome::welcome(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::welcome)
{
    ui->setupUi(this);
    QPixmap pix("/home/bhuvna/projects/images_of_welcome_9660483375.jpg");
    ui->label->setPixmap(pix);

        QPixmap bkgnd("/home/bhuvna/projects/back.jpg");
        bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
        QPalette palette;
        palette.setBrush(QPalette::Background, bkgnd);
        this->setPalette(palette);




}

welcome::~welcome()
{
    delete ui;
}

void welcome::on_pushButton_start_clicked()
{
    about four;
    four.setModal(true);
    four.exec();


}
