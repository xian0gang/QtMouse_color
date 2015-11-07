#include "mylable.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
MyLable::MyLable(QWidget *parent) : QLabel (parent)
{

}

void MyLable::paintEvent(QPaintEvent *event)
{
//    QLabel::paintEvent(event);
    QPainter painter(this);

//       QPixmap pix;
//       pix.load(":/new/images/24998689_1.png");
//       painter.drawPixmap(0,0,pix.width(),pix.height(),pix);

//    image.load(":/new/images/24998689_1.png");

    image.load(set_pic_filename_path);
//    setPixmap(QPixmap::fromImage(image));
//    resize(image.width(),image.height());
//    QPixmap pix;
//    pix.load(set_pic_filename_path);
//    painter.drawPixmap(0,0,pix.width(),pix.height(),pix);
//    painter.begin(this);
    painter.drawImage(0,0,image,0,0,image.width(),image.height());

//    img=new QImage;
//        img->load(set_pic_filename_path);
//        setPixmap(QPixmap::fromImage(*img));
//        painter.drawImage(0,0,&img,0,0,img->width(),img->height());
    //在选取的点上标号或圈出
//    resize(QSize(image.width(),image.height()));

    int num_1=1;
    int num_2=2;
    int num_3=3;
    int num_4=4;
    int num_5=5;
    int num_6=6;
    int num_7=7;
    int num_8=8;
    int num_9=9;

    switch (num) {
    case 1:
       num_1_x=x;
       num_1_y=y;
       break;
    case 2:
       num_2_x=x;
       num_2_y=y;
       break;
    case 3:
       num_3_x=x;
       num_3_y=y;
       break;
    case 4:
       num_4_x=x;
       num_4_y=y;
       break;
    case 5:
       num_5_x=x;
       num_5_y=y;
       break;
    case 6:
       num_6_x=x;
       num_6_y=y;
       break;
    case 7:
       num_7_x=x;
       num_7_y=y;
       break;
    case 8:
       num_8_x=x;
       num_8_y=y;
       break;
    case 9:
       num_9_x=x;
       num_9_y=y;
       break;
    default:
       break;
    }
    if(num>0)
    {
        if((num_1_x>0)&&(num_1_y>0))
        {
            painter.drawText(num_1_x+6,num_1_y+4,QString::number(num_1,10));
        }
        if((num_2_x>0)&&(num_2_y>0))
        {
            painter.drawText(num_2_x+6,num_2_y+4,QString::number(num_2,10));
        }
        if((num_3_x>0)&&(num_3_y>0))
        {
            painter.drawText(num_3_x+6,num_3_y+4,QString::number(num_3,10));
        }
        if((num_4_x>0)&&(num_4_y>0))
        {
            painter.drawText(num_4_x+6,num_4_y+4,QString::number(num_4,10));
        }
        if((num_5_x>0)&&(num_5_y>0))
        {
            painter.drawText(num_5_x+6,num_5_y+4,QString::number(num_5,10));
        }
        if((num_6_x>0)&&(num_6_y>0))
        {
            painter.drawText(num_6_x+6,num_6_y+4,QString::number(num_6,10));
        }
        if((num_7_x>0)&&(num_7_y>0))
        {
             painter.drawText(num_7_x+6,num_7_y+4,QString::number(num_7,10));
        }
        if((num_8_x>0)&&(num_8_y>0))
        {
            painter.drawText(num_8_x+6,num_8_y+4,QString::number(num_8,10));
        }
        if((num_9_x>0)&&(num_9_y>0))
        {
            painter.drawText(num_9_x+6,num_9_y+4,QString::number(num_9,10));
        }

        painter.setPen(QPen(Qt::red,1));//设置画笔形式
        if((num_1_x>0)&&(num_1_y>0))
        {
            painter.drawEllipse(num_1_x-3,num_1_y-3,6,6);
        }
        if((num_2_x>0)&&(num_2_y>0))
        {
            painter.drawEllipse(num_2_x-3,num_2_y-3,6,6);
        }
        if((num_3_x>0)&&(num_3_y>0))
        {
            painter.drawEllipse(num_3_x-3,num_3_y-3,6,6);
        }
        if((num_4_x>0)&&(num_4_y>0))
        {
            painter.drawEllipse(num_4_x-3,num_4_y-3,6,6);
        }
        if((num_5_x>0)&&(num_5_y>0))
        {
            painter.drawEllipse(num_5_x-3,num_5_y-3,6,6);
        }
        if((num_6_x>0)&&(num_6_y>0))
        {
            painter.drawEllipse(num_6_x-3,num_6_y-3,6,6);
        }
        if((num_7_x>0)&&(num_7_y>0))
            {
            painter.drawEllipse(num_7_x-3,num_7_y-3,6,6);
        }
        if((num_8_x>0)&&(num_8_y)>0)
        {
            painter.drawEllipse(num_8_x-3,num_8_y-3,6,6);
        }
        if((num_9_x>0)&&(num_9_y>0))
        {
            painter.drawEllipse(num_9_x-3,num_9_y-3,6,6);
        }
    }
    painter.end();

//    this->resize(image.width(),image.height());  //设置lable大小为图片的大小

}

void MyLable::mousePressEvent(QMouseEvent *event)
{
    //获取点
    x=event->x();
    y=event->y();
qDebug("x:%d",x);
qDebug("y:%d\n",y);

    num = num + 1;
    if(num>9)
        num=1;

//    /*获取rgb值*/
    QRgb rgb=image.pixel(x,y);
    red = qRed(rgb);
    blue = qBlue(rgb);
    green = qGreen(rgb);
qDebug("r:%d",red);
qDebug("g:%d",blue);
qDebug("b:%d\n",green);

    emit send_rgb_num(num,red,green,blue);

    update();
}


void MyLable::set_filename(QString filename)
{
    QString xgfilename;
    xgfilename=QFileDialog::getOpenFileName(this,
                                     tr("选择图像"),
                                     "",
                                     tr("Images (*.png *.bmp *.jpg *.tif *.GIF )"));
    if(xgfilename.isEmpty())
    {
        return;
    }
    else
    {
        set_pic_filename_path=xgfilename;
    }
    qDebug("b:%d\n",green);

    num = 0;

    num_1_x=0;                           //数字方便操作，在转换成qstring
    num_1_y=0;                             //数字方便操作，在转换成qstring
    num_2_x=0;
    num_2_y=0;
    num_3_x=0;
    num_3_y=0;
    num_4_x=0;                           //数字方便操作，在转换成qstring
    num_4_y=0;                             //数字方便操作，在转换成qstring
    num_5_x=0;
    num_5_y=0;
    num_6_x=0;
    num_6_y=0;
    num_7_x=0;                           //数字方便操作，在转换成qstring
    num_7_y=0;                             //数字方便操作，在转换成qstring
    num_8_x=0;
    num_8_y=0;
    num_9_x=0;
    num_9_y=0;
}
