#include "Canvas.h"
#include "Figure.h"
#include "MyEllipse.h"

void Canvas::add_figure(Figure* figure) {
    figures.push_back(figure);
}

void Canvas::clear_figures_list(){
    figures.clear();
}

void Canvas::show_figures_list() {
    int index = 1;
    for (auto figure: figures) {
        cout << index << ". ";
        figure->show_info();
        index++;
    }
}

void Canvas::print_figure_list() {
    cout << "Press any key to print figures" << endl;
    _getch();
    system("cls");

    for (auto figure: figures) {
        figure->print();
    }

    _getch();
    cout << "Press any key to clear console" << endl;
    system("cls");
}

void Canvas::delete_figure(){
    int index;
    show_figures_list();
    cout << endl << "Choose number" <<endl;
    cin >> index;
    figures.erase(figures.begin()+(index-1));
}









