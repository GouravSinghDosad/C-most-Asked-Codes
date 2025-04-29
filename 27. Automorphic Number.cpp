// An Automorphic number is a number whose square ends with the number itself. For example, 5 is an Automorphic number because 5² = 25, which ends with 5.

#include <iostream>
using namespace std;

bool isAutomorphic(int num) {
    int square = num * num;
    while (square > 0) {
        if (square % 10 != num % 10) return false;
        square /= 10;
        num /= 10;
    }
    return true;
}

int main() {
    int num = 25;
    if (isAutomorphic(num)) cout << num << " is an Automorphic number." << endl;
    else cout << num << " is not an Automorphic number." << endl;
    return 0;
}
