
#include <iostream>
#include <cmath>
using namespace std;

void findRoots(int a, int b, int c) {
    int discriminant = b*b - 4*a*c;
    if (discriminant > 0) {
        float root1 = (-b + sqrt(discriminant)) / (2*a);
        float root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different: " << root1 << " and " << root2 << endl;
    } else if (discriminant == 0) {
        float root = -b / (2*a);
        cout << "Roots are real and the same: " << root << endl;
    } else {
        cout << "Roots are complex numbers." << endl;
    }
}

int main() {
    int a = 1, b = -3, c = 2;
    findRoots(a, b, c);
    return 0;
}
