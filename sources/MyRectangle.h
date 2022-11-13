//
// Created by Danila on 12.11.2022.
//

#ifndef DRAWER_MYRECTANGLE_H
#define DRAWER_MYRECTANGLE_H

#include  "Figure.h"

class MyRectangle : public Figure {
public:
    MyRectangle(int fp_x, int fp_y, int sp_x, int sp_y) : Figure(
            fp_x, fp_y, sp_x, sp_y, "Rectangle") {};
};

#endif //DRAWER_MYRECTANGLE_H
