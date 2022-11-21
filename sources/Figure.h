#ifndef DRAWER_FIGURE_H
#define DRAWER_FIGURE_H

#include <Windows.h>
#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

class Figure {
    /**
     * Базовый класс для фигур, от которого наследуются все остальные классы
     * int first_point_x{}, first_point_y{}; - первая координата
     * int second_point_x{}, second_point_y{}; - вторая координата
     * string name - название фигур
     * show_info() - выводит информацию о хранящихся фигурах
     */
    friend class Canvas;

protected:
    int first_point_x{}, first_point_y{};
    int second_point_x{}, second_point_y{};
    string name;

public:
    Figure(int first_point_x, int first_point_y, int second_point_x, int second_point_y, string figure_name);
    Figure(int first_point_x, int first_point_y, string f_name);
    explicit Figure(string f_name); //ставится перед объявлением конструктора с одним параметром и предотвращает неявное преобразование типов при инициализации
    virtual void show_info();
    virtual void print() {};
};


#endif //DRAWER_FIGURE_H
