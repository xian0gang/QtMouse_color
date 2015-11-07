#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
/*让图片自适应lable的大小，图片会被拉伸等*/
//ui->label->setScaledContents(true);
//    ui->label->resize(100,100);
////    ui->scrollArea->setWidget(ui->label);
//     QImage* img=new QImage;
//    img->load(filename);
//    ui->label->setPixmap(QPixmap::fromImage(*img));


    x=0;
    y=0;
    R1=0.0;G1=0.0;B1=0.0;
    R2=0.0;G2=0.0;B2=0.0;
    R3=0.0;G3=0.0;B3=0.0;
    R4=0.0;G4=0.0;B4=0.0;
    R5=0.0;G5=0.0;B5=0.0;
    R6=0.0;G6=0.0;B6=0.0;
    R7=0.0;G7=0.0;B7=0.0;
    R8=0.0;G8=0.0;B8=0.0;
    R9=0.0;G9=0.0;B9=0.0;

    ui->lineEdit->setEnabled(false);
    ui->lineEdit_2->setEnabled(false);
    ui->lineEdit_3->setEnabled(false);
    ui->lineEdit_4->setEnabled(false);
    ui->lineEdit_5->setEnabled(false);
    ui->lineEdit_6->setEnabled(false);
    ui->lineEdit_7->setEnabled(false);
    ui->lineEdit_8->setEnabled(false);
    ui->lineEdit_9->setEnabled(false);

    btnGroupFruits = new QButtonGroup(this);
    btnGroupFruits->addButton(ui->radioButton,0);
    btnGroupFruits->addButton(ui->radioButton_1,1);
    btnGroupFruits->addButton(ui->radioButton_2,2);
    btnGroupFruits->addButton(ui->radioButton_3,3);
    btnGroupFruits->addButton(ui->radioButton_4,4);
    btnGroupFruits->addButton(ui->radioButton_5,5);
    btnGroupFruits->addButton(ui->radioButton_6,6);
    btnGroupFruits->addButton(ui->radioButton_7,7);
    btnGroupFruits->addButton(ui->radioButton_8,8);

   connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(OpenFile()));

   connect(ui->radioButton,SIGNAL(clicked()),this,SLOT(onRadioClick()));
   connect(ui->radioButton_1,SIGNAL(clicked()),this,SLOT(onRadioClick()));
   connect(ui->radioButton_2,SIGNAL(clicked()),this,SLOT(onRadioClick()));
   connect(ui->radioButton_3,SIGNAL(clicked()),this,SLOT(onRadioClick()));
   connect(ui->radioButton_4,SIGNAL(clicked()),this,SLOT(onRadioClick()));
   connect(ui->radioButton_5,SIGNAL(clicked()),this,SLOT(onRadioClick()));
   connect(ui->radioButton_6,SIGNAL(clicked()),this,SLOT(onRadioClick()));
   connect(ui->radioButton_7,SIGNAL(clicked()),this,SLOT(onRadioClick()));
   connect(ui->radioButton_8,SIGNAL(clicked()),this,SLOT(onRadioClick()));

   connect(ui->label,SIGNAL(send_rgb_num(int,int,int,int)),this,SLOT(set_rgb_num(int,int,int,int)));
   connect(this,SIGNAL(send_filename(QString)),ui->label,SLOT(set_filename(QString)));

   connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(submit_canshu()));
}



void Widget::OpenFile()
{

    emit send_filename(filename);
}

void Widget::paintEvent(QPaintEvent *event)
{

    QPainter painter(this);
//    painter.setPen(QPen(Qt::blue, 1));
//    painter.drawEllipse(x, y, 10, 10);

}

void Widget::mousePressEvent(QMouseEvent *event)
{
//    QString str="("+QString::number(event->x())+","+QString::number(event->y())+")";
//    // ui->lineEdit->setText(tr("鼠标按下")+str);
//    if(event->button()==Qt::LeftButton)
//    {
//    ui->lineEdit->setText(tr("鼠标左键按下:")+str);
//    }else if(event->button()==Qt::RightButton)
//    {
//    ui->lineEdit->setText(tr("鼠标右键按下:")+str);
//    }else if(event->button()==Qt::MidButton)
//    {
//    ui->lineEdit->setText(tr("鼠标中键按下:")+str);
//    }

//    x=event->x();
//    y=event->y();
//    update();
}


void Widget::onRadioClick()
{
//    switch (btnGroupFruits->checkedId()) {
//    case 0:
//qDebug("0");
////ui->label_5->setText(QString("%1").arg(red));
////ui->label_6->setText(QString("%1").arg(blue));
////ui->label_7->setText(QString("%1").arg(green));
//        break;
//    case 1:
//qDebug("1");
//ui->label_10->setText(QString("%1").arg(red));
//ui->label_11->setText(QString("%1").arg(green));
//ui->label_9->setText(QString("%1").arg(blue));
//        break;
//    case 2:
//qDebug("2");
//ui->label_13->setText(QString("%1").arg(red));
//ui->label_14->setText(QString("%1").arg(green));
//ui->label_12->setText(QString("%1").arg(blue));
//        break;
//    case 3:
//qDebug("3");
//ui->label_16->setText(QString("%1").arg(red));
//ui->label_17->setText(QString("%1").arg(green));
//ui->label_15->setText(QString("%1").arg(blue));
//        break;
//    case 4:
//qDebug("4");
//ui->label_19->setText(QString("%1").arg(red));
//ui->label_20->setText(QString("%1").arg(green));
//ui->label_18->setText(QString("%1").arg(blue));
//        break;
//    case 5:
//qDebug("5");
//ui->label_22->setText(QString("%1").arg(red));
//ui->label_23->setText(QString("%1").arg(green));
//ui->label_21->setText(QString("%1").arg(blue));
//        break;
//    case 6:
//qDebug("6");
//ui->label_25->setText(QString("%1").arg(red));
//ui->label_26->setText(QString("%1").arg(green));
//ui->label_24->setText(QString("%1").arg(blue));
//        break;
//    case 7:
//qDebug("7");
//ui->label_28->setText(QString("%1").arg(red));
//ui->label_29->setText(QString("%1").arg(green));
//ui->label_27->setText(QString("%1").arg(blue));
//        break;
//    case 8:
//qDebug("8");
//ui->label_30->setText(QString("%1").arg(red));
//ui->label_32->setText(QString("%1").arg(green));
//ui->label_31->setText(QString("%1").arg(blue));
//        break;
//    default:
//        break;
//    }

}

void Widget::set_rgb_num(int num,int r, int g, int b)
{
    red=r;
    green=g;
    blue=b;
//    ui->label_5->setText(QString("%1").arg(r));
//    ui->label_6->setText(QString("%1").arg(g));
//    ui->label_7->setText(QString("%1").arg(b));

    /*在lable中显示颜色*/
    QPalette palette;
////    ui->label_8->setAutoFillBackground(true);
//    palette.setColor(QPalette::Background, QColor (r, g , b, 255));
//    ui->label_8->setPalette(palette);


    switch (num) {
    case 1:
qDebug("1");
R1=(double)r;
G1=(double)g;
B1=(double)b;
ui->label_5->setText(QString("%1").arg(r));
ui->label_6->setText(QString("%1").arg(g));
ui->label_7->setText(QString("%1").arg(b));
        break;
    case 2:
qDebug("2");
R2=(double)r;
G2=(double)g;
B2=(double)b;
ui->label_10->setText(QString("%1").arg(r));
ui->label_11->setText(QString("%1").arg(g));
ui->label_9->setText(QString("%1").arg(b));
        break;
    case 3:
qDebug("3");
R3=(double)r;
G3=(double)g;
B3=(double)b;
ui->label_13->setText(QString("%1").arg(r));
ui->label_14->setText(QString("%1").arg(g));
ui->label_12->setText(QString("%1").arg(b));
        break;
    case 4:
qDebug("4");
R4=(double)r;
G4=(double)g;
B4=(double)b;
ui->label_16->setText(QString("%1").arg(r));
ui->label_17->setText(QString("%1").arg(g));
ui->label_15->setText(QString("%1").arg(b));
        break;
    case 5:
qDebug("5");
R5=(double)r;
G5=(double)g;
B5=(double)b;
ui->label_19->setText(QString("%1").arg(r));
ui->label_20->setText(QString("%1").arg(g));
ui->label_18->setText(QString("%1").arg(b));
        break;
    case 6:
qDebug("6");
R6=(double)r;
G6=(double)g;
B6=(double)b;
ui->label_22->setText(QString("%1").arg(r));
ui->label_23->setText(QString("%1").arg(g));
ui->label_21->setText(QString("%1").arg(b));
        break;
    case 7:
qDebug("7");
R7=(double)r;
G7=(double)g;
B7=(double)b;
ui->label_25->setText(QString("%1").arg(r));
ui->label_26->setText(QString("%1").arg(g));
ui->label_24->setText(QString("%1").arg(b));
        break;
    case 8:
qDebug("8");
R8=(double)r;
G8=(double)g;
B8=(double)b;
ui->label_28->setText(QString("%1").arg(r));
ui->label_29->setText(QString("%1").arg(g));
ui->label_27->setText(QString("%1").arg(b));
        break;
    case 9:
qDebug("9");
R9=(double)r;
G9=(double)g;
B9=(double)b;
ui->label_30->setText(QString("%1").arg(r));
ui->label_32->setText(QString("%1").arg(g));
ui->label_31->setText(QString("%1").arg(b));
        break;
    default:
        break;
    }
}

void Widget::submit_canshu()
{
    double R,G,B,SUM,R_G,R_B,G_B,R_SUM,G_SUM,B_SUM;
    R=0.0;G=0.0;B=0.0;R_G=0.0;R_B=0.0;G_B=0.0;R_SUM=0.0;G_SUM=0.0;B_SUM=0.0;
    R=(R1+R2+R3+R4+R5+R6+R7+R8+R9)/9;
    G=(G1+G2+G3+G4+G5+G6+G7+G8+G9)/9;
    B=(B1+B2+B3+B4+B5+B6+B7+B8+B9)/9;
    SUM=R+G+B;
    R_G=R/G;
    R_B=R/B;
    G_B=G/B;
    R_SUM=R/SUM;
    G_SUM=G/SUM;
    B_SUM=B/SUM;


    ui->lineEdit->setAlignment(Qt::AlignCenter);
    ui->lineEdit->setText(QString("%1").arg(R));
    ui->lineEdit_2->setAlignment(Qt::AlignCenter);
    ui->lineEdit_2->setText(QString("%1").arg(G));
    ui->lineEdit_3->setAlignment(Qt::AlignCenter);
    ui->lineEdit_3->setText(QString("%1").arg(B));
    ui->lineEdit_4->setAlignment(Qt::AlignCenter);
    ui->lineEdit_4->setText(QString("%1").arg(R_G));
    ui->lineEdit_5->setAlignment(Qt::AlignCenter);
    ui->lineEdit_5->setText(QString("%1").arg(R_B));
    ui->lineEdit_6->setAlignment(Qt::AlignCenter);
    ui->lineEdit_6->setText(QString("%1").arg(G_B));
    ui->lineEdit_7->setAlignment(Qt::AlignCenter);
    ui->lineEdit_7->setText(QString("%1").arg(R_SUM));
    ui->lineEdit_8->setAlignment(Qt::AlignCenter);
    ui->lineEdit_8->setText(QString("%1").arg(G_SUM));
    ui->lineEdit_9->setAlignment(Qt::AlignCenter);
    ui->lineEdit_9->setText(QString("%1").arg(B_SUM));

}

Widget::~Widget()
{
    delete ui;
}
