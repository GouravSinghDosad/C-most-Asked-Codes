#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int binary) {
    int decimal = 0, i = 0;
    while (binary != 0) {
        int rem = binary % 10;
        decimal += rem * pow(2, i);
        binary /= 10;
        i++;
    }
    return decimal;
}

int main() {
    int binary = 1011;
    cout << "Decimal: " << binaryToDecimal(binary) << endl;
    return 0;
}
