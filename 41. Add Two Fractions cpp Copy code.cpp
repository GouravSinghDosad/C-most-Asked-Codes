#include <iostream>
using namespace std;

struct Fraction {
    int numerator;
    int denominator;
};

Fraction addFractions(Fraction f1, Fraction f2) {
    int lcm = f1.denominator * f2.denominator;  // Calculate LCM of denominators
    int sumNum = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    return {sumNum, lcm};
}

int main() {
    Fraction f1 = {1, 2}; // 1/2
    Fraction f2 = {1, 3}; // 1/3

    Fraction result = addFractions(f1, f2);
    cout << "Sum of fractions: " << result.numerator << "/" << result.denominator << endl;
    return 0;
}
