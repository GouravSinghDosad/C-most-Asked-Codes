#include <iostream>
using namespace std;

void checkVowelConsonant(char ch) {
    ch = tolower(ch); // Convert to lowercase
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << ch << " is a vowel." << endl;
    } else {
        cout << ch << " is a consonant." << endl;
    }
}

int main() {
    char ch = 'A';
    checkVowelConsonant(ch);
    return 0;
}
