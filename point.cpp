#include <cmath>
#include <iostream>
#include "Point.h"

double distanceBetweenPoints(const Point& p1, const Point& p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

void showPointMenu(Point& p1, Point& p2) {
    int choice;
    do {
        cout << "Point Operations:\n"
            << "1. Calculate Distance Between Points\n"
            << "2. Back to Main Menu\n";
        cin >> choice;

        switch (choice) {
        case 1: {
            cout << "Distance between points: " << distanceBetweenPoints(p1, p2) << "\n";
            break;
        }
        case 2:
            cout << "Returning to Main Menu...\n";
            break;
        default:
            cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 2);
}
