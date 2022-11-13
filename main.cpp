#include <iostream>

#include "sources/Point.h"
#include "sources/MyRectangle.h"
#include "sources/MyLine.h"
#include "sources/Canvas.h"

using namespace std;


int main() {
    MyRectangle a = MyRectangle(20, 20, 200, 200);
    MyRectangle b = MyRectangle(200, 200, 400, 400);
    MyRectangle e = MyRectangle(300, 300, 500, 500);
    MyLine c = MyLine(15, 15, 25, 25);

    Canvas canv = Canvas();

    canv.add_figure(c);
    canv.add_figure(a);
    canv.add_figure(b);
    canv.add_figure(e);
    canv.show_figures_list();
    canv.print_figure_list();

    system("pause");
    return 0;
}
