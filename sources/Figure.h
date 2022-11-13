//
// Created by Danila on 13.11.2022.
//

#ifndef DRAWER_FIGURE_H
#define DRAWER_FIGURE_H

#include <Windows.h>
#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

class Figure {
    friend class Canvas;

protected:
    int first_point_x, first_point_y;
    int second_point_x, second_point_y;
    string name;

public:
    Figure(int first_point_x, int first_point_y, int second_point_x, int second_point_y, string figure_name);
    Figure(int first_point_x, int first_point_y, string f_name);

    void show_info();
};


#endif //DRAWER_FIGURE_H
