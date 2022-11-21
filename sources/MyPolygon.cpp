#include "MyPolygon.h"

void MyPolygon::print() {
    HWND hWnd = GetConsoleWindow();
    HDC hdc = GetDC(hWnd);
    SelectObject(hdc, GetStockObject(DC_PEN));
    SetDCPenColor(hdc, RGB(255, 0, 0));
    if (fill) {
        SetDCBrushColor(hdc, RGB(0, 255, 0));
    } else {
        SetDCBrushColor(hdc, RGB(0, 0, 0));
    }

    int d;
    d = abs(first_point_x - second_point_x);//y1==y2
    int Ox,Oy;
    Ox = (first_point_x + second_point_x)/2;
    Oy = (first_point_y + second_point_y)/2;
    int r;
    r = d/2;
    int Bx,By;
    Bx = (Ox - r/2);
    By = (Oy + r);
    int Cx,Cy;
    Cx = (Ox + r/2);
    Cy = (Oy + r);
    int Dx,Dy;
    Dx = (Ox - r/2);
    Dy = (Oy - r);
    int Ex,Ey;
    Ex = (Ox + r/2);
    Ey = (Oy - r);

    cout<<r<<" "<<Ox<<" "<<Oy<<" "<<Bx<<"  "<<By<<endl;
    MoveToEx(hdc,first_point_x, first_point_y, NULL);
    LineTo(hdc, Bx, By );
    MoveToEx(hdc,Bx, By, NULL);
    LineTo(hdc, Cx, Cy );
    MoveToEx(hdc,Cx, Cy, NULL);
    LineTo(hdc, second_point_x , second_point_y );
    MoveToEx(hdc,second_point_x, second_point_y, NULL);
    LineTo(hdc, Ex  , Ey );
    MoveToEx(hdc,Ex, Ey, NULL);
    LineTo(hdc, Dx  , Dy );
    MoveToEx(hdc,Dx, Dy, NULL);
    LineTo(hdc, first_point_x, first_point_y );
    ReleaseDC(hWnd, hdc);
}

MyPolygon::MyPolygon(): Figure( "MyPolygon") {
    cout<<"Fill figure? (y/n)"<<endl;
    char n;
    cin>>n;
    if (n =='y'){
        fill = true;
    } else if(n == 'n'){
        fill = false;
    } else {
        cout<<"You should enter y or n "<<endl;
    }
}

MyPolygon::MyPolygon(int fp_x, int fp_y, bool fill): Figure(fp_x, fp_y, "MyPolygon") {
    this->fill = fill;
}