
#ifndef DRAWER_MYRECTANGLE_H
#define DRAWER_MYRECTANGLE_H

#include  "Figure.h"

class MyRectangle : public Figure {
    /**
     * Класс для описания прямоугольника
     * bool fill - переменная создана для закрашен/ не закрашен
     * print() - выводит прямоугольник
     */
public:
    bool fill;

    MyRectangle();

    MyRectangle(int fp_x, int fp_y, int sp_x, int sp_y) : Figure(fp_x, fp_y, sp_x, sp_y, "Rectangle") {};

    MyRectangle(int fp_x, int fp_y, int sp_x, int sp_y, bool fill);

    const void print();
};

#endif //DRAWER_MYRECTANGLE_H
