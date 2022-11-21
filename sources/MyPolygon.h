#ifndef DRAWER_MYPOLYGON_H
#define DRAWER_MYPOLYGON_H

#include "Figure.h"

class MyPolygon : public Figure{
    /**
     * Класс для описания многоугольника
     * bool fill - переменная создана для закрашен/ не закрашен
     * print() - выводит многоугольник
     */
public:
    bool fill;
    MyPolygon(int fp_x, int fp_y, bool fill);
    MyPolygon();
    MyPolygon(int fp_x, int fp_y) : Figure (fp_x, fp_y, "MyPolygon") {}
    const void print();
};


#endif //DRAWER_MYPOLYGON_H
