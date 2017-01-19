#include "testtest.h"
#include "ui_testtest.h"
#include "submit.h"
#include "ui_submit.h"
#include "ui_welcome.h"


iqt list[20];
static int i=1;
int marks=0;
int counta ;
int countc;

testtest::testtest(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testtest)
{
    ui->setupUi(this);
ui->radioButton_1->click();
    QPixmap bkgnd("/home/bhuvna/projects/submit.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);


    list[1].no =1;
    list[1].ques = " Forest is to tree as tree is to ? ";
    list[1].op1 = "Plant";
    list[1].op2 = "Leaf";
    list[1].op3 = "Mangrove";
    list[1].op4 = "Branch";
    list[1].c =2;
    list[1].mm = 10 ;

    list[2].no =2;
    list[2].ques = "Please enter the missing number :3,6,18,72, ?  ";
    list[2].op1 = "214";
    list[2].op2 = "272";
    list[2].op3 = "360";
    list[2].op4 = "432";
    list[2].c =3;
    list[2].mm = 10 ;

    list[3].no =3;
    list[3].ques = "Please enter the missing number : 4,5,8,17,44, ?  ";
    list[3].op1 = "125";
    list[3].op2 = "88";
    list[3].op3 = "134";
    list[3].op4 = "32";
    list[3].c =1;
    list[3].mm = 10;


    list[4].no =4;
    list[4].ques = "The word PARTICULAR is the opposite of:  ";
    list[4].op1 = "Distinct";
    list[4].op2 = "Vague";
    list[4].op3 = "Exacting";
    list[4].op4 = "Fussy";
    list[4].c =2;
    list[4].mm = 10 ;

    list[5].no =5;
    list[5].ques = "Pig is to 'pork' as 'Cow' is to _____  ";
    list[5].op1 = "Lamb";
    list[5].op2 = "Beef";
    list[5].op3 = "Stew";
    list[5].op4 = "Cattle";
    list[5].c =2;
    list[5].mm = 10;

    list[6].no =6;
    list[6].ques = "The day after the day after tomorrow is four days before Monday. What day is it today? ";
    list[6].op1 = "Monday";
    list[6].op2 = "Friday";
    list[6].op3 = "Wednesday";
    list[6].op4 = "Saturday";
    list[6].c =1;
    list[6].mm = 10;

    list[7].no =7;
    list[7].ques = "E  H  C  A  D  E  ? : What letter comes next in this sequence? ";
    list[7].op1 = "J";
    list[7].op2 = "M";
    list[7].op3 = "I";
    list[7].op4 = "W";
    list[7].c =3;
    list[7].mm = 10;


    list[8].no =8;
    list[8].ques = " THIS STATEMENT IS FALSE! :  Which of the following applies to the above statement? ";
    list[8].op1 = "True";
    list[8].op2 = "False";
    list[8].op3 = "Cannot be resolved";
    list[8].op4 = "None of the above";
    list[8].c =3;
    list[8].mm = 10;

    list[9].no =9;
    list[9].ques = " Wendy likes these numbers except one --- Which one? :  1431     6581     7243     8656 ";
    list[9].op1 = "1431";
    list[9].op2 = "7243";
    list[9].op3 = "8656";
    list[9].op4 = "6581";
    list[9].c =4;
    list[9].mm = 10;


    list[10].no =10;
    list[10].ques = " Which of the following can be arranged into a 5-letter English word?";
    list[10].op1 = "H R G S T";
    list[10].op2 = "R I L S A ";
    list[10].op3 = "P L R T I";
    list[10].op4 = "W Q U I R";
    list[10].c =2;
    list[10].mm = 10;

    list[11].no =11;
    list[11].ques = " What number best completes the analogy - 8:4 as 10: ? ";
    list[11].op1 = "3";
    list[11].op2 = "7";
    list[11].op3 = "24";
    list[11].op4 = "5";
    list[11].c =4;
    list[11].mm = 10;

    list[12].no =12;
    list[12].ques = " Which one of the five choices makes the best comparison :  PEACH is to HCAEP as 46251 is to: ? ";
    list[12].op1 = "25641";
    list[12].op2 = "15264";
    list[12].op3 = "12654";
    list[12].op4 = "26451";
    list[12].c =2;
    list[12].mm = 10;



    list[13].no =13;
    list[13].ques = " Which one of the numbers does not belong in the following series? :  2 - 3 - 6 - 7 - 8 - 14 - 15 - 30 ";
    list[13].op1 = "8";
    list[13].op2 = "15";
    list[13].op3 = "2";
    list[13].op4 = "6";
    list[13].c =1;
    list[13].mm = 10;

    list[14].no =14;
    list[14].ques = " Finger is to Hand as Leaf is to: ";
    list[14].op1 = "Branch";
    list[14].op2 = "Twig";
    list[14].op3 = "Bark";
    list[14].op4 = "Tree";
    list[14].c =2;
    list[14].mm = 10;


    list[15].no =15;
    list[15].ques = " Choose the number that is 1/4 of 1/2 of 1/5 of 200: ";
    list[15].op1 = "10";
    list[15].op2 = "25";
    list[15].op3 = "5";
    list[15].op4 = "50";
    list[15].c =3;
    list[15].mm = 10;


    ui->label_no->setText(QString::number(1));
    ui->textBrowser->setText(QString(list[i].ques));

    ui->radioButton_1->setText(list[1].op1);
    ui->radioButton_2->setText(list[1].op2);
    ui->radioButton_3->setText(list[1].op3);
    ui->radioButton_4->setText(list[1].op4);

}

testtest::~testtest()
{
    delete ui;
}

void testtest::on_radioButton_1_clicked()

{   ui->radioButton_1->setChecked(true);
    ui->radioButton_2->setChecked(false);
    ui->radioButton_3->setChecked(false);
    ui->radioButton_4->setChecked(false);

    list[i].a = 1;



}


void testtest::on_radioButton_2_clicked()
{ ui->radioButton_2->setChecked(true);
    ui->radioButton_1->setChecked(false);
    ui->radioButton_3->setChecked(false);
    ui->radioButton_4->setChecked(false);
    list[i].a=2;

}

void testtest::on_radioButton_3_clicked()
{ ui->radioButton_3->setChecked(true);
    ui->radioButton_2->setChecked(false);
    ui->radioButton_1->setChecked(false);
    ui->radioButton_4->setChecked(false);
    list[i].a=3;

}


void testtest::on_radioButton_4_clicked()
{
    ui->radioButton_4->setChecked(true);
       ui->radioButton_2->setChecked(false);
       ui->radioButton_3->setChecked(false);
       ui->radioButton_1->setChecked(false);
    list[i].a=4;

}

void testtest::on_pushButton_prev_clicked()
{    this->ui->radioButton_1->setAutoExclusive(false);
    this->ui->radioButton_1->setChecked(false);
     this->ui->radioButton_2->setAutoExclusive(false);
         this->ui->radioButton_2->setChecked(false);
     this->ui->radioButton_3->setAutoExclusive(false);
         this->ui->radioButton_3->setChecked(false);
     this->ui->radioButton_4->setAutoExclusive(false);
         this->ui->radioButton_4->setChecked(false);
    if(i>1)
    {
         --i;
        if(list[i].a==1)
            ui->radioButton_1->click();
        else if(list[i].a==2)
            ui->radioButton_2->click();
        else if(list[i].a==3)
            ui->radioButton_3->click();
        else if (list[i].a==4)
            ui->radioButton_4->click();
        ui->radioButton_1->setText(list[i].op1);
        ui->radioButton_2->setText(list[i].op2);
        ui->radioButton_3->setText(list[i].op3);
        ui->radioButton_4->setText(list[i].op4);
        ui->label_no->setText(QString::number(i));
        ui->textBrowser->setText(QString(list[i].ques));

    }
}




void testtest::on_pushButton_next_clicked()
{  this->ui->radioButton_1->setAutoExclusive(false);
    this->ui->radioButton_1->setChecked(false);
     this->ui->radioButton_2->setAutoExclusive(false);
         this->ui->radioButton_2->setChecked(false);
     this->ui->radioButton_3->setAutoExclusive(false);
         this->ui->radioButton_3->setChecked(false);
     this->ui->radioButton_4->setAutoExclusive(false);
         this->ui->radioButton_4->setChecked(false);

    if(i<15)
    {
        ++i;
         if(list[i].a==1)
             ui->radioButton_1->click();
         else if(list[i].a==2)
             ui->radioButton_2->click();
         else if(list[i].a==3)
             ui->radioButton_3->click();
         else if (list[i].a==4)
             ui->radioButton_4->click();
        ui->radioButton_1->setText(list[i].op1);

        ui->radioButton_2->setText(list[i].op2);
        ui->radioButton_3->setText(list[i].op3);
        ui->radioButton_4->setText(list[i].op4);
        ui->label_no->setText(QString::number(i));
        ui->textBrowser->setText(QString(list[i].ques));

    }
}



void testtest::on_pushButton_1_clicked()
{    this->ui->radioButton_1->setAutoExclusive(false);
     this->ui->radioButton_1->setChecked(false);
      this->ui->radioButton_2->setAutoExclusive(false);
          this->ui->radioButton_2->setChecked(false);
      this->ui->radioButton_3->setAutoExclusive(false);
          this->ui->radioButton_3->setChecked(false);
      this->ui->radioButton_4->setAutoExclusive(false);
          this->ui->radioButton_4->setChecked(false);
    i=1;
     if(list[i].a==1)
         ui->radioButton_1->click();
     else if(list[i].a==2)
         ui->radioButton_2->click();
     else if(list[i].a==3)
         ui->radioButton_3->click();
     else if (list[i].a==4)
    ui->radioButton_1->setText(list[i].op1);
    ui->radioButton_2->setText(list[i].op2);
    ui->radioButton_3->setText(list[i].op3);
    ui->radioButton_4->setText(list[i].op4);
    ui->label_no->setText(QString::number(i));
    ui->textBrowser->setText(QString(list[i].ques));

}

void testtest::on_pushButton_2_clicked()
{this->ui->radioButton_1->setAutoExclusive(false);
    this->ui->radioButton_1->setChecked(false);
     this->ui->radioButton_2->setAutoExclusive(false);
         this->ui->radioButton_2->setChecked(false);
     this->ui->radioButton_3->setAutoExclusive(false);
         this->ui->radioButton_3->setChecked(false);
     this->ui->radioButton_4->setAutoExclusive(false);
         this->ui->radioButton_4->setChecked(false);
    i=2;
    if(list[i].a==1)
        ui->radioButton_1->click();
    else if(list[i].a==2)
        ui->radioButton_2->click();
    else if(list[i].a==3)
        ui->radioButton_3->click();
    else if (list[i].a==4)
    ui->radioButton_1->setText(list[i].op1);
    ui->radioButton_2->setText(list[i].op2);
    ui->radioButton_3->setText(list[i].op3);
    ui->radioButton_4->setText(list[i].op4);
    ui->label_no->setText(QString::number(i));
    ui->textBrowser->setText(QString(list[i].ques));
}




void testtest::on_pushButton_3_clicked()
{ this->ui->radioButton_1->setAutoExclusive(false);
    this->ui->radioButton_1->setChecked(false);
     this->ui->radioButton_2->setAutoExclusive(false);
         this->ui->radioButton_2->setChecked(false);
     this->ui->radioButton_3->setAutoExclusive(false);
         this->ui->radioButton_3->setChecked(false);
     this->ui->radioButton_4->setAutoExclusive(false);
         this->ui->radioButton_4->setChecked(false);
    i=3;
    if(list[i].a==1)
        ui->radioButton_1->click();
    else if(list[i].a==2)
        ui->radioButton_2->click();
    else if(list[i].a==3)
        ui->radioButton_3->click();
    else if (list[i].a==4)
    ui->radioButton_1->setText(list[i].op1);
    ui->radioButton_2->setText(list[i].op2);
    ui->radioButton_3->setText(list[i].op3);
    ui->radioButton_4->setText(list[i].op4);
    ui->label_no->setText(QString::number(i));
    ui->textBrowser->setText(QString(list[i].ques));
}

void testtest::on_pushButton_4_clicked()
{ this->ui->radioButton_1->setAutoExclusive(false);
    this->ui->radioButton_1->setChecked(false);
     this->ui->radioButton_2->setAutoExclusive(false);
         this->ui->radioButton_2->setChecked(false);
     this->ui->radioButton_3->setAutoExclusive(false);
         this->ui->radioButton_3->setChecked(false);
     this->ui->radioButton_4->setAutoExclusive(false);
         this->ui->radioButton_4->setChecked(false);
    i=4;
    if(list[i].a==1)
        ui->radioButton_1->click();
    else if(list[i].a==2)
        ui->radioButton_2->click();
    else if(list[i].a==3)
        ui->radioButton_3->click();
    else if (list[i].a==4)
    ui->radioButton_1->setText(list[i].op1);
    ui->radioButton_2->setText(list[i].op2);
    ui->radioButton_3->setText(list[i].op3);
    ui->radioButton_4->setText(list[i].op4);
    ui->label_no->setText(QString::number(i));
    ui->textBrowser->setText(QString(list[i].ques));
}

void testtest::on_pushButton_5_clicked()
{this->ui->radioButton_1->setAutoExclusive(false);
    this->ui->radioButton_1->setChecked(false);
     this->ui->radioButton_2->setAutoExclusive(false);
         this->ui->radioButton_2->setChecked(false);
     this->ui->radioButton_3->setAutoExclusive(false);
         this->ui->radioButton_3->setChecked(false);
     this->ui->radioButton_4->setAutoExclusive(false);
         this->ui->radioButton_4->setChecked(false);
    i=5;
    if(list[i].a==1)
        ui->radioButton_1->click();
    else if(list[i].a==2)
        ui->radioButton_2->click();
    else if(list[i].a==3)
        ui->radioButton_3->click();
    else if (list[i].a==4)
    ui->radioButton_1->setText(list[i].op1);
    ui->radioButton_2->setText(list[i].op2);
    ui->radioButton_3->setText(list[i].op3);
    ui->radioButton_4->setText(list[i].op4);
    ui->label_no->setText(QString::number(i));
    ui->textBrowser->setText(QString(list[i].ques));
}

void testtest::on_pushButton_6_clicked()
{ this->ui->radioButton_1->setAutoExclusive(false);
    this->ui->radioButton_1->setChecked(false);
     this->ui->radioButton_2->setAutoExclusive(false);
         this->ui->radioButton_2->setChecked(false);
     this->ui->radioButton_3->setAutoExclusive(false);
         this->ui->radioButton_3->setChecked(false);
     this->ui->radioButton_4->setAutoExclusive(false);
         this->ui->radioButton_4->setChecked(false);
    i=6;
    if(list[i].a==1)
        ui->radioButton_1->click();
    else if(list[i].a==2)
        ui->radioButton_2->click();
    else if(list[i].a==3)
        ui->radioButton_3->click();
    else if (list[i].a==4)
    ui->radioButton_1->setText(list[i].op1);
    ui->radioButton_2->setText(list[i].op2);
    ui->radioButton_3->setText(list[i].op3);
    ui->radioButton_4->setText(list[i].op4);
    ui->label_no->setText(QString::number(i));
    ui->textBrowser->setText(QString(list[i].ques));
}






void testtest::on_pushButton_submit_clicked()
{    countc =0;
    for(i=1;i<16;i++)
    {  if(list[i].a==list[i].c)
        { marks  = marks + list[i].mm;
            countc++;

        }

    }


counta =0;
    for(int m=0;m<16;m++)
    {
          if(list[m].a!=0)
              counta++;
    }

    ui->label_score->setText(QString::number(marks));

    submit two;
   two.setModal(true);
    two.exec();
}



void submit::on_pushButton_clicked()
{
    ui->label_result->setText(QString::number(marks));
    if(marks>=130)
     {
         QPixmap pix("/home/bhuvna/projects/thumbs.jpg");
         ui->label->setPixmap(pix);
         ui->label__text->setText(QString ("WOW!! The world just found a person who might just become our new Einstein! Well Done!! "));

     }

     else if(marks <130 && marks>=90)
     { QPixmap pix("/home/bhuvna/projects/ok.png");
         ui->label->setPixmap(pix);
         ui->label__text->setText(QString ("Average!! But dont worry,with a little effor you cn touch the skies! "));


     }

     else if(marks<90)
     {
         QPixmap pix("/home/bhuvna/projects/sad.png");
         ui->label->setPixmap(pix);
         ui->label__text->setText(QString ("Bad!! Need to work hard! Take this as a challenge and I am sure the next time we see you,you will come put with flying colors! All the Best! "));

     }

;
     ui->label_result->setText("YOUR IQ IS : "+QString::number(marks));
    // ui->progressBar_r->setValue(counta);
  //   int temp = (countc*100)/counta ;
    // ui->progressBar ->setValue(temp);

}

void submit::on_pushButton_clicked(bool checked)
{   ui->progressBar->show();
    ui->progressBar_r->show();
    ui->label_2->show();
    ui->label_3->show();
    ui->progressBar_r->setValue(counta);
    int temp = (countc*100)/counta ;
    ui->progressBar ->setValue(temp);

}

void testtest::on_pushButton_15_clicked()
{ this->ui->radioButton_1->setAutoExclusive(false);
    this->ui->radioButton_1->setChecked(false);
     this->ui->radioButton_2->setAutoExclusive(false);
         this->ui->radioButton_2->setChecked(false);
     this->ui->radioButton_3->setAutoExclusive(false);
         this->ui->radioButton_3->setChecked(false);
     this->ui->radioButton_4->setAutoExclusive(false);
         this->ui->radioButton_4->setChecked(false);
    i=7;
    if(list[i].a==1)
        ui->radioButton_1->click();
    else if(list[i].a==2)
        ui->radioButton_2->click();
    else if(list[i].a==3)
        ui->radioButton_3->click();
    else if (list[i].a==4)
    ui->radioButton_1->setText(list[i].op1);
    ui->radioButton_2->setText(list[i].op2);
    ui->radioButton_3->setText(list[i].op3);
    ui->radioButton_4->setText(list[i].op4);
    ui->label_no->setText(QString::number(i));
    ui->textBrowser->setText(QString(list[i].ques));
}



void testtest::on_pushButton_7_clicked()
{ this->ui->radioButton_1->setAutoExclusive(false);
    this->ui->radioButton_1->setChecked(false);
     this->ui->radioButton_2->setAutoExclusive(false);
         this->ui->radioButton_2->setChecked(false);
     this->ui->radioButton_3->setAutoExclusive(false);
         this->ui->radioButton_3->setChecked(false);
     this->ui->radioButton_4->setAutoExclusive(false);
         this->ui->radioButton_4->setChecked(false);
    i=8;
    if(list[i].a==1)
        ui->radioButton_1->click();
    else if(list[i].a==2)
        ui->radioButton_2->click();
    else if(list[i].a==3)
        ui->radioButton_3->click();
    else if (list[i].a==4)
    ui->radioButton_1->setText(list[i].op1);
    ui->radioButton_2->setText(list[i].op2);
    ui->radioButton_3->setText(list[i].op3);
    ui->radioButton_4->setText(list[i].op4);
    ui->label_no->setText(QString::number(i));
    ui->textBrowser->setText(QString(list[i].ques));
}


void testtest::on_pushButton_8_clicked()
{ this->ui->radioButton_1->setAutoExclusive(false);
    this->ui->radioButton_1->setChecked(false);
     this->ui->radioButton_2->setAutoExclusive(false);
         this->ui->radioButton_2->setChecked(false);
     this->ui->radioButton_3->setAutoExclusive(false);
         this->ui->radioButton_3->setChecked(false);
     this->ui->radioButton_4->setAutoExclusive(false);
         this->ui->radioButton_4->setChecked(false);
    i=9;
    if(list[i].a==1)
        ui->radioButton_1->click();
    else if(list[i].a==2)
        ui->radioButton_2->click();
    else if(list[i].a==3)
        ui->radioButton_3->click();
    else if (list[i].a==4)
    ui->radioButton_1->setText(list[i].op1);
    ui->radioButton_2->setText(list[i].op2);
    ui->radioButton_3->setText(list[i].op3);
    ui->radioButton_4->setText(list[i].op4);
    ui->label_no->setText(QString::number(i));
    ui->textBrowser->setText(QString(list[i].ques));
}

void testtest::on_pushButton_9_clicked()
{ this->ui->radioButton_1->setAutoExclusive(false);
    this->ui->radioButton_1->setChecked(false);
     this->ui->radioButton_2->setAutoExclusive(false);
         this->ui->radioButton_2->setChecked(false);
     this->ui->radioButton_3->setAutoExclusive(false);
         this->ui->radioButton_3->setChecked(false);
     this->ui->radioButton_4->setAutoExclusive(false);
         this->ui->radioButton_4->setChecked(false);
    i=10;
    if(list[i].a==1)
        ui->radioButton_1->click();
    else if(list[i].a==2)
        ui->radioButton_2->click();
    else if(list[i].a==3)
        ui->radioButton_3->click();
    else if (list[i].a==4)
    ui->radioButton_1->setText(list[i].op1);
    ui->radioButton_2->setText(list[i].op2);
    ui->radioButton_3->setText(list[i].op3);
    ui->radioButton_4->setText(list[i].op4);
    ui->label_no->setText(QString::number(i));
    ui->textBrowser->setText(QString(list[i].ques));
}

void testtest::on_pushButton_10_clicked()
{ this->ui->radioButton_1->setAutoExclusive(false);
    this->ui->radioButton_1->setChecked(false);
     this->ui->radioButton_2->setAutoExclusive(false);
         this->ui->radioButton_2->setChecked(false);
     this->ui->radioButton_3->setAutoExclusive(false);
         this->ui->radioButton_3->setChecked(false);
     this->ui->radioButton_4->setAutoExclusive(false);
         this->ui->radioButton_4->setChecked(false);
    i=11;
    if(list[i].a==1)
        ui->radioButton_1->click();
    else if(list[i].a==2)
        ui->radioButton_2->click();
    else if(list[i].a==3)
        ui->radioButton_3->click();
    else if (list[i].a==4)
    ui->radioButton_1->setText(list[i].op1);
    ui->radioButton_2->setText(list[i].op2);
    ui->radioButton_3->setText(list[i].op3);
    ui->radioButton_4->setText(list[i].op4);
    ui->label_no->setText(QString::number(i));
    ui->textBrowser->setText(QString(list[i].ques));
}

void testtest::on_pushButton_11_clicked()
{
    i=12;
    if(list[i].a==1)
        ui->radioButton_1->click();
    else if(list[i].a==2)
        ui->radioButton_2->click();
    else if(list[i].a==3)
        ui->radioButton_3->click();
    else if (list[i].a==4)
    ui->radioButton_1->setText(list[i].op1);
    ui->radioButton_2->setText(list[i].op2);
    ui->radioButton_3->setText(list[i].op3);
    ui->radioButton_4->setText(list[i].op4);
    ui->label_no->setText(QString::number(i));
    ui->textBrowser->setText(QString(list[i].ques));
}



void testtest::on_pushButton_12_clicked()
{ this->ui->radioButton_1->setAutoExclusive(false);
    this->ui->radioButton_1->setChecked(false);
     this->ui->radioButton_2->setAutoExclusive(false);
         this->ui->radioButton_2->setChecked(false);
     this->ui->radioButton_3->setAutoExclusive(false);
         this->ui->radioButton_3->setChecked(false);
     this->ui->radioButton_4->setAutoExclusive(false);
         this->ui->radioButton_4->setChecked(false);
    i=13;
    if(list[i].a==1)
        ui->radioButton_1->click();
    else if(list[i].a==2)
        ui->radioButton_2->click();
    else if(list[i].a==3)
        ui->radioButton_3->click();
    else if (list[i].a==4)
    ui->radioButton_1->setText(list[i].op1);
    ui->radioButton_2->setText(list[i].op2);
    ui->radioButton_3->setText(list[i].op3);
    ui->radioButton_4->setText(list[i].op4);
    ui->label_no->setText(QString::number(i));
    ui->textBrowser->setText(QString(list[i].ques));
}

void testtest::on_pushButton_13_clicked()
{this->ui->radioButton_1->setAutoExclusive(false);
    this->ui->radioButton_1->setChecked(false);
     this->ui->radioButton_2->setAutoExclusive(false);
         this->ui->radioButton_2->setChecked(false);
     this->ui->radioButton_3->setAutoExclusive(false);
         this->ui->radioButton_3->setChecked(false);
     this->ui->radioButton_4->setAutoExclusive(false);
         this->ui->radioButton_4->setChecked(false);
    i=14;
    if(list[i].a==1)
        ui->radioButton_1->click();
    else if(list[i].a==2)
        ui->radioButton_2->click();
    else if(list[i].a==3)
        ui->radioButton_3->click();
    else if (list[i].a==4)
    ui->radioButton_1->setText(list[i].op1);
    ui->radioButton_2->setText(list[i].op2);
    ui->radioButton_3->setText(list[i].op3);
    ui->radioButton_4->setText(list[i].op4);
    ui->label_no->setText(QString::number(i));
    ui->textBrowser->setText(QString(list[i].ques));
}


void testtest::on_pushButton__clicked()
{ this->ui->radioButton_1->setAutoExclusive(false);
    this->ui->radioButton_1->setChecked(false);
     this->ui->radioButton_2->setAutoExclusive(false);
         this->ui->radioButton_2->setChecked(false);
     this->ui->radioButton_3->setAutoExclusive(false);
         this->ui->radioButton_3->setChecked(false);
     this->ui->radioButton_4->setAutoExclusive(false);
         this->ui->radioButton_4->setChecked(false);
    i=15;
    if(list[i].a==1)
        ui->radioButton_1->click();
    else if(list[i].a==2)
        ui->radioButton_2->click();
    else if(list[i].a==3)
        ui->radioButton_3->click();
    else if (list[i].a==4)
    ui->radioButton_1->setText(list[i].op1);
    ui->radioButton_2->setText(list[i].op2);
    ui->radioButton_3->setText(list[i].op3);
    ui->radioButton_4->setText(list[i].op4);
    ui->label_no->setText(QString::number(i));
    ui->textBrowser->setText(QString(list[i].ques));
}
