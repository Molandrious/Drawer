#include <iostream>
#include <conio.h>
#include "sources/Point.h"
#include "sources/MyRectangle.h"
#include "sources/MyLine.h"
#include "sources/Canvas.h"
#include "sources/MyEllipse.h"
#include "sources/MyPolygon.h"

using namespace std;
int menu() {
    cout << "0. Exit" << endl;
    cout << "1. Add rectangle" << endl;
    cout << "2. Add line" << endl;
    cout << "3. Add ellipse" << endl;
    cout << "4. Add polygon" << endl;
    cout << "5. Draw figures" << endl;
    cout << "6. Information figure list" << endl;
    cout << "7. Delete figure" << endl;
    cout << "8. Clear figure list" << endl << endl;
    int m;
    cin >> m;
    if (m < 0 || m > 8){
        cout << "Enter a valid value!!!!" << endl;
        return (menu());
    }
    return m;
}

int main() {
    MyRectangle rectangle = MyRectangle(0, 0, 0, 0);
    MyLine line = MyLine(0, 0, 0, 0);
    MyEllipse ellipse = MyEllipse(0, 0, 0, 0,true);
    MyPolygon polygon = MyPolygon (0, 0);

    Canvas canv = Canvas();

    while(true)
    {
        switch (menu())
        {
            case 0:
                return 0;
            case 1:
                cout << "Creating line witch coords:" << endl;
                rectangle = MyRectangle();
                canv.add_figure(&rectangle);
                cout << endl;
                system("cls");
                break;
            case 2:
                cout << "Creating line witch coords:" << endl;
                line = MyLine();
                canv.add_figure(&line);
                cout << endl;
                system("cls");
                break;
            case 3:
                cout << "Creating ellipse witch coords:" << endl;
                ellipse = MyEllipse();
                canv.add_figure(&ellipse);
                cout << endl;
                system("cls");
                break;
            case 4:
                cout << "Creating polygon witch coords:" << endl;
                polygon = MyPolygon();
                canv.add_figure(&polygon);
                cout << endl;
                system("cls");
                break;
            case 5:
                canv.print_figure_list();
                break;
            case 6:
                cout << "Figures list:" << endl;
                canv.show_figures_list();
                cout << endl;
                system("pause");
                system("cls");
                break;
            case 7:
                cout << "Deleting figure:" << endl;
                canv.delete_figure();
                cout << endl;
                system("cls");
                break;
            case 8:
                system("cls");
                cout << "Figures list has cleared." << endl;
                canv.clear_figures_list();
                cout << endl;
                break;
        }
    }
}

