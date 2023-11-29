#ifndef FRACTION_H
#define FRACTION_H
#include<iostream>

using namespace std;


struct Fraction {
    int numerator;
    int denominator;
};

Fraction reduceFraction(const Fraction& frac);
Fraction addFractions(const Fraction& frac1, const Fraction& frac2);
Fraction subtractFractions(const Fraction& frac1, const Fraction& frac2);
Fraction multiplyFractions(const Fraction& frac1, const Fraction& frac2);
Fraction divideFractions(const Fraction& frac1, const Fraction& frac2);
void showFractionMenu(Fraction& frac1, Fraction& frac2);

#endif 