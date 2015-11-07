#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMouseEvent>
#include <QPainter>
#include <QImage>
#include <QRgb>
#include <QColor>
#include <QButtonGroup>
#include "mylable.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    void mousePressEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);
    ~Widget();

signals:
    void send_filename(QString filename);

public slots:
    void OpenFile();
    void onRadioClick();
    void set_rgb_num(int num,int r,int g,int b);
    void submit_canshu();

private:
    Ui::Widget *ui;
    QString filename;
    QImage* img;
    QButtonGroup *btnGroupFruits;
    int red;
    int blue;
    int green;
    int x;
    int y;
    double R1,R2,R3,R4,R5,R6,R7,R8,R9;
    double G1,G2,G3,G4,G5,G6,G7,G8,G9;
    double B1,B2,B3,B4,B5,B6,B7,B8,B9;
};

#endif // WIDGET_H
