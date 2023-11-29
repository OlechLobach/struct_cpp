#ifndef FRACTION_H
#define FRACTION_H
#include<iostream>


struct Fraction {
    int numerator;
    int denominator;
};

Fraction reduceFraction(const Fraction& frac);
Fraction addFractions(const Fraction& frac1, const Fraction& frac2);
Fraction subtractFractions(const Fraction& frac1, const Fraction& frac2);
Fraction multiplyFractions(const Fraction& frac1, const Fraction& frac2);
Fraction divideFractions(const Fraction& frac1, const Fraction& frac2);
void showFractionMenu();

#endif 
