//
// Created by Danila on 12.11.2022.
//

#ifndef DRAWER_MYLINE_H
#define DRAWER_MYLINE_H

#include "Figure.h"

class MyLine : public Figure {

public:
    MyLine(int fp_x, int fp_y, int sp_x, int sp_y) : Figure(
            fp_x, fp_y, sp_x, sp_y, "Line") {};
};

#endif //DRAWER_MYLINE_H
