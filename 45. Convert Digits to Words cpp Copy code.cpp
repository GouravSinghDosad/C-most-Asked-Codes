#include <iostream>
#include <string>
using namespace std;

string digitToWord(int digit) {
    switch (digit) {
        case 0: return "Zero";
        case 1: return "One";
        case 2: return "Two";
        case 3: return "Three";
        case 4: return "Four";
        case 5: return "Five";
        case 6: return "Six";
        case 7: return "Seven";
        case 8: return "Eight";
        case 9: return "Nine";
        default: return "";
    }
}

void convertToWords(int num) {
    while (num > 0) {
        int digit = num % 10;
        cout << digitToWord(digit) << " ";
        num /= 10;
    }
}

int main() {
    int num = 1234;
    cout << "Digits in words: ";
    convertToWords(num);
    cout << endl;
    return 0;
}
