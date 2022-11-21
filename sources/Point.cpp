#include "Point.h"


void Point::print() {
    HWND hWnd = GetConsoleWindow();
    HDC hdc = GetDC(hWnd);
    SelectObject(hdc, GetStockObject(DC_PEN));
    SelectObject(hdc, GetStockObject(DC_BRUSH));

    SetDCPenColor(hdc, RGB(255, 0, 0));
    SetDCBrushColor(hdc, RGB(0, 255, 0));
    LineTo(hdc, second_point_x, second_point_y);
    SelectObject(hdc, GetStockObject(NULL_BRUSH));
}
