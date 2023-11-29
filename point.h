#ifndef POINT_H
#define POINT_H
#include<iostream>
#include <cmath>

using namespace std;

struct Point {
    double x;
    double y;
};

double distanceBetweenPoints(const Point& p1, const Point& p2);
void showPointMenu(Point& p1, Point& p2);

#endif
