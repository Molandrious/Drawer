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

Figure::Figure(string f_name)
{
    this->name = std::move(f_name);
    cout << "Enter first point x" << endl;
    cin >> this->first_point_x;
    cout << "Enter first point y" << endl;
    cin >> this->first_point_y;
    cout << "Enter second point x" << endl;
    cin >> this->second_point_x;
    cout << "Enter second point y" << endl;
    cin >> this->second_point_y;

    /** Обработка исключений **/

    if (first_point_x < 0 or second_point_x < 0 or first_point_y < 0 or second_point_y < 0) {
        cout << endl;
        cout << "Ti loh" << endl;
        while (first_point_x < 0 or second_point_x < 0 or first_point_y < 0 or second_point_y < 0) {
            cout << "Enter first point x" << endl;
            cin >> this->first_point_x;
            cout << "Enter first point y" << endl;
            cin >> this->first_point_y;
            cout << "Enter second point x" << endl;
            cin >> this->second_point_x;
            cout << "Enter second point y" << endl;
            cin >> this->second_point_y;
        }
    }
    if (name == "MyPolygon") {
        if (first_point_x == second_point_x & first_point_y == second_point_y) {
            cout << "Ti loh" << endl << endl;
            while (first_point_x == second_point_x & first_point_y == second_point_y) {
                cout << "Enter first point x" << endl;
                cin >> this->first_point_x;
                cout << "Enter first point y" << endl;
                cin >> this->first_point_y;
                cout << "Enter second point x" << endl;
                cin >> this->second_point_x;
                cout << "Enter second point y" << endl;
                cin >> this->second_point_y;
            }
            if (first_point_y != second_point_y) {
                cout << "Ti loh" << endl << endl;
                while (first_point_y != second_point_y) {
                    cout << "Enter first point x" << endl;
                    cin >> this->first_point_x;
                    cout << "Enter first point y" << endl;
                    cin >> this->first_point_y;
                    cout << "Enter second point x" << endl;
                    cin >> this->second_point_x;
                    cout << "Enter second point y" << endl;
                    cin >> this->second_point_y;
                }
            }
        }

    }
    if (name == "MyEllipse") {
        if (first_point_x == second_point_x & first_point_y == second_point_y) {
            cout << "Ti loh" << endl << endl;
            while (first_point_x == second_point_x & first_point_y == second_point_y) {
                cout << "Enter first point x" << endl;
                cin >> this->first_point_x;
                cout << "Enter first point y" << endl;
                cin >> this->first_point_y;
                cout << "Enter second point x" << endl;
                cin >> this->second_point_x;
                cout << "Enter second point y" << endl;
                cin >> this->second_point_y;
            }
        }
        if (first_point_y == second_point_y or first_point_x == second_point_x) {
            cout << "Ti loh" << endl << endl;
            while (first_point_y == second_point_y or first_point_x == second_point_x) {
                cout << "Enter first point x" << endl;
                cin >> this->first_point_x;
                cout << "Enter first point y" << endl;
                cin >> this->first_point_y;
                cout << "Enter second point x" << endl;
                cin >> this->second_point_x;
                cout << "Enter second point y" << endl;
                cin >> this->second_point_y;
            }
        }
    }
    if (name == "MyLine") {
        if (first_point_x == second_point_x & first_point_y == second_point_y) {
            cout << "Ti loh" << endl << endl;
            while (first_point_y == second_point_y or first_point_x == second_point_x) {
                cout << "Enter first point x" << endl;
                cin >> this->first_point_x;
                cout << "Enter first point y" << endl;
                cin >> this->first_point_y;
                cout << "Enter second point x" << endl;
                cin >> this->second_point_x;
                cout << "Enter second point y" << endl;
                cin >> this->second_point_y;
            }
        }
    }
    if (name == "MyRectangle"){
        if (first_point_x == second_point_x & first_point_y == second_point_y) {
            cout << "Ti loh" << endl << endl;
            while (first_point_y == second_point_y or first_point_x == second_point_x) {
                cout << "Enter first point x" << endl;
                cin >> this->first_point_x;
                cout << "Enter first point y" << endl;
                cin >> this->first_point_y;
                cout << "Enter second point x" << endl;
                cin >> this->second_point_x;
                cout << "Enter second point y" << endl;
                cin >> this->second_point_y;
            }
        }
    }
}
