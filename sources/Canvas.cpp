#include "Canvas.h"
#include "Figure.h"
#include "MyEllipse.h"

void Canvas::add_figure(const MyEllipse& figure) {
    this->ellipses.push_back(figure);
}
void Canvas::add_figure(const MyRectangle& figure) {
    this->rectangles.push_back(figure);
}
void Canvas::add_figure(const MyPolygon& figure) {
    this->polygons.push_back(figure);
}
void Canvas::add_figure(const MyLine& figure) {
    this->lines.push_back(figure);
}

void Canvas::clear_figures_list(){
    this->ellipses.clear();
    this->polygons.clear();
    this->rectangles.clear();
    this->lines.clear();
}

void Canvas::show_figures_list() {

    for (MyEllipse& figure : ellipses) {
        figure.show_info();
    }

    for (MyLine& figure : lines) {
        figure.show_info();
    }

    for (MyRectangle& figure : rectangles) {
        figure.show_info();
    }

    for (MyPolygon& figure : polygons) {
        figure.show_info();
    }
}

void Canvas::print_figure_list() {
    cout << "Press any key to print figures" << endl;
    _getch();
    system("cls");

    for (MyEllipse& figure : ellipses) {
        figure.print();
    }

    for (MyLine& figure : lines) {
        figure.print();
    }

    for (MyRectangle& figure : rectangles) {
        figure.print();
    }

    for (MyPolygon& figure : polygons) {
        figure.print();
    }

    for (Point& figure : points) {
        figure.print();
    }

    _getch();
    cout << "Press any key to clear console" << endl;
    system("cls");
}

void Canvas::delete_figure(){
    show_figures_list();
    cout << endl;
    cout<<"--Select figure--"<<endl;
    cout << "1. Draw rectangle" << endl;
    cout << "2. Draw line" << endl;
    cout << "3. Draw ellipse" << endl;
    cout << "4. Draw polygon" << endl;
    int t;
    cin >> t;
    if (t == 1){
        cout<<"Choose number"<<endl;
        int i = 1;
        for(auto item:rectangles){
            cout << i << ". ";
            item.show_info();
            i++;
        }
        cin >> t;
        rectangles.erase(rectangles.begin()+(t-1));
    }
    if (t == 2){
        cout<<"Choose number"<<endl;
        int i = 1;
        for(auto item:lines){
            cout << i << ". ";
            item.show_info();
            i++;
        }
        cin >> t;
        lines.erase(lines.begin()+(t-1));
    }
    if (t == 3){
        cout<<"Choose number"<<endl;
        int i = 1;
        for(auto item:ellipses){
            cout << i << ". ";
            item.show_info();
            i++;
        }
        cin >> t;
        ellipses.erase(ellipses.begin()+(t-1));
    }
    if (t == 4){
        cout<<"Choose number"<<endl;
        int i = 1;
        for(auto item:polygons){
            cout << i << ". ";
            item.show_info();
            i++;
        }
        cin >> t;
        polygons.erase(polygons.begin()+(t-1));
    }
}








