#include "Fraction.h"

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

Fraction reduceFraction(const Fraction& frac) {
    int commonFactor = gcd(frac.numerator, frac.denominator);
    Fraction reduced = { frac.numerator / commonFactor, frac.denominator / commonFactor };
    return reduced;
}

Fraction addFractions(const Fraction& frac1, const Fraction& frac2) {
    Fraction result = {
        frac1.numerator * frac2.denominator + frac2.numerator * frac1.denominator,
        frac1.denominator * frac2.denominator
    };
    return reduceFraction(result);
}

Fraction subtractFractions(const Fraction& frac1, const Fraction& frac2) {
    Fraction result = {
        frac1.numerator * frac2.denominator - frac2.numerator * frac1.denominator,
        frac1.denominator * frac2.denominator
    };
    return reduceFraction(result);
}

Fraction multiplyFractions(const Fraction& frac1, const Fraction& frac2) {
    Fraction result = {
        frac1.numerator * frac2.numerator,
        frac1.denominator * frac2.denominator
    };
    return reduceFraction(result);
}

Fraction divideFractions(const Fraction& frac1, const Fraction& frac2) {
    Fraction result = {
        frac1.numerator * frac2.denominator,
        frac1.denominator * frac2.numerator
    };
    return reduceFraction(result);
}

void showFractionMenu(Fraction& frac1, Fraction& frac2) {
    int choice;
    do {
        std::cout << "Fraction Operations:\n"
            << "1. Add Fractions\n"
            << "2. Subtract Fractions\n"
            << "3. Multiply Fractions\n"
            << "4. Divide Fractions\n"
            << "5. Back to Main Menu\n";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            Fraction result = addFractions(frac1, frac2);
            std::cout << "Result of addition: " << result.numerator << "/" << result.denominator << "\n";
            break;
        }
        case 2: {
            Fraction result = subtractFractions(frac1, frac2);
            std::cout << "Result of subtraction: " << result.numerator << "/" << result.denominator << "\n";
            break;
        }
        case 3: {
            Fraction result = multiplyFractions(frac1, frac2);
            std::cout << "Result of multiplication: " << result.numerator << "/" << result.denominator << "\n";
            break;
        }
        case 4: {
            Fraction result = divideFractions(frac1, frac2);
            std::cout << "Result of division: " << result.numerator << "/" << result.denominator << "\n";
            break;
        }
        case 5:
            std::cout << "Returning to Main Menu...\n";
            break;
        default:
            std::cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 5);
}
