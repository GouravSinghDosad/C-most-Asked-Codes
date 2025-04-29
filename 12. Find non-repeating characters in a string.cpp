#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    unordered_map<char, int> freq;

    // Count frequency of each character
    for (char ch : str) {
        freq[ch]++;
    }

    cout << "Non-repeating characters are: ";
    for (char ch : str) {
        if (freq[ch] == 1) {
            cout << ch << " ";
        }
    }

    return 0;
}
