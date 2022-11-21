#ifndef DRAWER_MYLINE_H
#define DRAWER_MYLINE_H

#include "Figure.h"

class MyLine : public Figure {
/**
 * Класс для описания линии
 * метод print() - выводит линию
 */
public:
    MyLine();
    MyLine(int fp_x, int fp_y, int sp_x, int sp_y);
    void print();
};

#endif //DRAWER_MYLINE_H
