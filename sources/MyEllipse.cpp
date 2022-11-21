#include "MyEllipse.h"

 void MyEllipse::print() {
    HWND hWnd = GetConsoleWindow();
    HDC hdc = GetDC(hWnd);
    SelectObject(hdc, GetStockObject(DC_PEN));
    SelectObject(hdc, GetStockObject(DC_BRUSH));
    SetDCPenColor(hdc, RGB(255, 0, 0));
    if (fill) {
        SetDCBrushColor(hdc, RGB(0, 255, 0));
    } else {
        SetDCBrushColor(hdc, RGB(0, 0, 0));
    }
    Ellipse(hdc,first_point_x, first_point_y, second_point_x, second_point_y);
    SelectObject(hdc, GetStockObject(NULL_BRUSH));

    ReleaseDC(hWnd, hdc);
}

MyEllipse::MyEllipse(): Figure( "MyEllipse") {
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

MyEllipse::MyEllipse(int fp_x, int fp_y, int sp_x, int sp_y, bool fill): Figure(fp_x, fp_y, sp_x, sp_y, "MyEllipse") {
    this->fill = fill;
}


