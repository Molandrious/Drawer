#ifndef DRAWER_CANVAS_H
#define DRAWER_CANVAS_H

#include <vector>
#include <iostream>

#include "Figure.h"
#include "Point.h"
#include "MyLine.h"
#include "MyRectangle.h"
#include "MyEllipse.h"
#include "MyPolygon.h"

using namespace std;

class Canvas {
    /**
     * Для каждой фигуры создан свой вектор
     * void clear_figures_list() - очищает вектора фигур;
     * void delete_figure() - удаляет заданную фигуру
     * void show_figures_list() - выводит информацию о фигурах в векторе;
     * void print_figure_list() - рисует фигуры;
     * void add_figure() - добавляет определенную фигуру в вектор
     **/
private:
    vector<Figure*> figures = {};
    vector<MyEllipse> ellipses = {};
    vector<MyLine> lines = {};
    vector<MyRectangle> rectangles = {};
    vector<MyPolygon> polygons = {};
    vector<Point> points = {};
public:

    void clear_figures_list();
    void delete_figure();
    void show_figures_list();
    void print_figure_list();

    void add_figure(Figure* figure);
};


#endif //DRAWER_CANVAS_H
