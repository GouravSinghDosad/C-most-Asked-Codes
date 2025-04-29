#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int sum = 0, temp = num, digits = log10(num) + 1;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return sum == num;
}

int main() {
    int num = 153;
    if (isArmstrong(num)) cout << num << " is an Armstrong number." << endl;
    else cout << num << " is not an Armstrong number." << endl;
    return 0;
}
