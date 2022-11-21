cmake_minimum_required(VERSION 3.23)
project(Drawer)

set(CMAKE_CXX_STANDARD 14)

add_executable(Drawer main.cpp sources/Point.cpp sources/Point.h sources/MyRectangle.cpp sources/MyRectangle.h sources/MyLine.cpp sources/MyLine.h sources/Canvas.cpp sources/Canvas.h sources/Figure.cpp sources/Figure.h sources/MyEllipse.cpp sources/MyEllipse.h sources/MyPolygon.cpp sources/MyPolygon.h)
