#ifndef MYLABLE_H
#define MYLABLE_H

#include <QWidget>
#include <QLabel>
#include <QMouseEvent>
#include <QPainter>
#include <QImage>
#include <QRgb>
#include <QColor>
#include "widget.h"
class MyLable : public QLabel
{
    Q_OBJECT
public:
    explicit MyLable(QWidget *parent = 0);
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);

signals:
void send_rgb_num(int num,int red,int green,int blue);

public slots:
    void set_filename(QString filename);

private:
    QString set_pic_filename_path;
    QImage* img;
    QImage image;
    int red;
    int blue;
    int green;
    int x;
    int y;
    int num;
    int num_1_x;                             //数字方便操作，在转换成qstring
    int num_1_y;                             //数字方便操作，在转换成qstring
    int num_2_x;
    int num_2_y;
    int num_3_x;
    int num_3_y;
    int num_4_x;                             //数字方便操作，在转换成qstring
    int num_4_y;                             //数字方便操作，在转换成qstring
    int num_5_x;
    int num_5_y;
    int num_6_x;
    int num_6_y;
    int num_7_x;                             //数字方便操作，在转换成qstring
    int num_7_y;                             //数字方便操作，在转换成qstring
    int num_8_x;
    int num_8_y;
    int num_9_x;
    int num_9_y;
};

#endif // MYLABLE_H
