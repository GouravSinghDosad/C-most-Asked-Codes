#include <iostream>
using namespace std;

int sumNaturalNumbers(int n) {
    if (n == 0) return 0;
    return n + sumNaturalNumbers(n - 1);
}

int main() {
    int num = 5;
    cout << "Sum of natural numbers: " << sumNaturalNumbers(num) << endl;
    return 0;
}
