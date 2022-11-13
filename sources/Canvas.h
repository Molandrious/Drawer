//
// Created by Danila on 13.11.2022.
//

#ifndef DRAWER_CANVAS_H
#define DRAWER_CANVAS_H

#include <vector>
#include <iostream>

#include "Figure.h"
#include "Point.h"
#include "MyLine.h"
#include "MyRectangle.h"

using namespace std;

class Canvas {
private:
    vector<Figure> figures = {};
public:
    void add_figure(const Figure& figure);
    void show_figures_list();
    void print_figure_list();

    void printLine(const Figure& obj);
    void printRectangle(const Figure &obj);
};


#endif //DRAWER_CANVAS_H
