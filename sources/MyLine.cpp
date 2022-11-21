#include "MyLine.h"

 void MyLine::print() {
    HWND hWnd = GetConsoleWindow();
    HDC hdc = GetDC(hWnd);
    SelectObject(hdc, GetStockObject(DC_PEN));
    SelectObject(hdc, GetStockObject(DC_BRUSH));

    SetDCPenColor(hdc, RGB(255, 0, 0));
    SetDCBrushColor(hdc, RGB(0, 255, 0));
    MoveToEx(hdc, first_point_x, first_point_y, 0);
    LineTo(hdc, second_point_x, second_point_y);
    SelectObject(hdc, GetStockObject(NULL_BRUSH));

    ReleaseDC(hWnd, hdc);
}

MyLine::MyLine(): Figure( "MyLine") {}

MyLine::MyLine(int fp_x, int fp_y, int sp_x, int sp_y): Figure(fp_x, fp_y, sp_x, sp_y, "MyLine") {}