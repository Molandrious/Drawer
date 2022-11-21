#ifndef DRAWER_MYELLIPSE_H
#define DRAWER_MYELLIPSE_H
#include "Figure.h"
class MyEllipse : public Figure {
    /**
    * Класс для описания эллипса
    * bool fill - переменная создана для закрашен/ не закрашен
    * print() - выводит эллипс
    */
public:
    bool fill;
    MyEllipse();
    MyEllipse(int fp_x, int fp_y, int sp_x, int sp_y, bool fill);
    void print();
};


#endif //DRAWER_MYELLIPSE_H
