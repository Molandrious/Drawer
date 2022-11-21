#ifndef DRAWER_POINT_H
#define DRAWER_POINT_H

#include "Figure.h"

class Point : public Figure{
    /**
    * Класс для описания точки
    * print() - выводит точку
    */
public:
    Point(int _x, int _y);
    //void show_info();
    Point(int fp_x, int fp_y, int sp_x, int sp_y) : Figure(
            fp_x, fp_y, sp_x, sp_y, "Line") {};
    void print();
};


#endif //DRAWER_POINT_H
