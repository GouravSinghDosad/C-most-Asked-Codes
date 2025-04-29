#include <iostream>
#include <cmath>
using namespace std;

int power(int base, int exponent) {
    return pow(base, exponent);
}

int main() {
    int base = 2, exponent = 3;
    cout << "Power: " << power(base, exponent) << endl;
    return 0;
}
