#ifndef RECTANGLE_H
#define RECTANGLE_H
#include<iostream>
using namespace std;


struct Rectangle {
    double x;
    double y; 
    double width;
    double height;
};

void moveRectangle(Rectangle& rect, double dx, double dy);
void resizeRectangle(Rectangle& rect, double newWidth, double newHeight);
void printRectangle(const Rectangle& rect);
void showRectangleMenu(Rectangle& rect);

#endif 