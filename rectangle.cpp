#include <iostream>
#include "Rectangle.h"

void moveRectangle(Rectangle& rect, double dx, double dy) {
    rect.x += dx;
    rect.y += dy;
}

void resizeRectangle(Rectangle& rect, double newWidth, double newHeight) {
    rect.width = newWidth;
    rect.height = newHeight;
}

void printRectangle(const Rectangle& rect) {
    cout << "Rectangle (x=" << rect.x << ", y=" << rect.y << ", width=" << rect.width << ", height=" << rect.height << ")\n";
}

void showRectangleMenu(Rectangle& rect) {
    int choice;
    do {
        cout << "Rectangle Operations:\n"
            << "1. Move Rectangle\n"
            << "2. Resize Rectangle\n"
            << "3. Print Rectangle\n"
            << "4. Back to Main Menu\n";
        cin >> choice;

        switch (choice) {
        case 1: {
            double dx, dy;
            cout << "Enter the value to move in x and y directions: ";
            cin >> dx >> dy;
            moveRectangle(rect, dx, dy);
            break;
        }
        case 2: {
            double newWidth, newHeight;
            cout << "Enter the new width and height: ";
            cin >> newWidth >> newHeight;
            resizeRectangle(rect, newWidth, newHeight);
            break;
        }
        case 3:
            printRectangle(rect);
            break;
        case 4:
            cout << "Returning to Main Menu...\n";
            break;
        default:
            cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 4);
}
