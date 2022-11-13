//
// Created by Danila on 13.11.2022.
//

#include "Canvas.h"
#include "Figure.h"

void Canvas::add_figure(const Figure& figure) {
    this->figures.push_back(figure);
}

void Canvas::show_figures_list() {
    int counter = 1;

    for (auto figure : figures) {
        cout << to_string(counter) + ". ";
        figure.show_info();
        counter ++;
    }
}

void Canvas::print_figure_list() {
    cout << "Press any key to print figures" << endl;
    _getch();
    system("cls");

    for (const auto& figure : figures) {
        if (figure.name == "Line") {
            printLine(figure);
        } else if (figure.name == "Rectangle"){
            printRectangle(figure);
        }
    }

    _getch();
    cout << "Press any key to clear console" << endl;
    system("cls");
}

void Canvas::printLine(const Figure& obj) {
    HWND hWnd = GetConsoleWindow(); // ������ �� ����
    HDC hdc = GetDC(hWnd);        // ������ �� �������� ���������� ������������ ������
    SelectObject(hdc, GetStockObject(DC_PEN)); // ����� ������������ ����
    SelectObject(hdc, GetStockObject(DC_BRUSH)); // ����� ����������� �����

    SetDCPenColor(hdc, RGB(255, 0, 0)); // ��������� ���� �������� �����
    SetDCBrushColor(hdc, RGB(0, 255, 0)); // ��������� ����� �������� �����
    MoveToEx(hdc, obj.first_point_x, obj.first_point_y, 0);
    LineTo(hdc, obj.second_point_x, obj.second_point_y);
    SelectObject(hdc, GetStockObject(NULL_BRUSH)); // ���������� �������� ������

    ReleaseDC(hWnd, hdc);        // ������������ ��������� ���������� ������
}

void Canvas::printRectangle(const Figure& obj) {
    HWND hWnd = GetConsoleWindow(); // ������ �� ����
    HDC hdc = GetDC(hWnd);        // ������ �� �������� ���������� ������������ ������
    SelectObject(hdc, GetStockObject(DC_PEN)); // ����� ������������ ����
    SelectObject(hdc, GetStockObject(DC_BRUSH)); // ����� ����������� �����

    SetDCPenColor(hdc, RGB(255, 0, 0)); // ��������� ���� �������� �����
    SetDCBrushColor(hdc, RGB(0, 255, 0)); // ��������� ����� �������� �����
    Rectangle(hdc, obj.first_point_x, obj.first_point_y, obj.second_point_x, obj.second_point_y);    // ����� �������������� ������ ���� ������������ ������ �����
    SelectObject(hdc, GetStockObject(NULL_BRUSH)); // ���������� �������� ������

    ReleaseDC(hWnd, hdc);        // ������������ ��������� ���������� ������
}


