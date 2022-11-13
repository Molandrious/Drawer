//
// Created by Danila on 13.11.2022.
//

#include "Figure.h"

#include <utility>

Figure::Figure(int first_point_x, int first_point_y, int second_point_x, int second_point_y, string f_name) {
    this->first_point_x = first_point_x;
    this->first_point_y = first_point_y;
    this->second_point_x = second_point_x;
    this->second_point_y = second_point_y;
    this->name = std::move(f_name);
}

Figure::Figure(int first_point_x, int first_point_y, string f_name) {
    this->first_point_x = first_point_x;
    this->first_point_y = first_point_y;
    this->second_point_x = first_point_x;
    this->second_point_y = first_point_y;
    this->name = std::move(f_name);
}

void Figure::show_info() {
    cout << name + "(" + to_string(first_point_x) + "," + to_string(first_point_y) + " : " +
            to_string(second_point_x) + "," + to_string(second_point_y) + ")" << endl;
}
