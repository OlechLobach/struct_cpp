#include <iostream>
#include "Rectangle.h"
#include "Point.h"
#include "Fraction.h"

int main() {
   
    Rectangle rect = { 0.0, 0.0, 5.0, 3.0 };
    Point p1 = { 0.0, 0.0 };
    Point p2 = { 3.0, 4.0 };
    Fraction frac1 = { 3, 4 };
    Fraction frac2 = { 5, 6 };

    int choice;
    do {
        cout << "Choose an option:\n"
            << "1. Rectangle Operations\n"
            << "2. Point Operations\n"
            << "3. Fraction Operations\n"
            << "4. Exit\n";
        cin >> choice;

        switch (choice) {
        case 1:
            showRectangleMenu(rect);
            break;
        case 2:
            showPointMenu(p1, p2);
            break;
        case 3:
            showFractionMenu();
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 4);

    return 0;
}
