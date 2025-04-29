#include <iostream>
using namespace std;

bool isMatch(string wild, string str) {
    int n = wild.length();
    int m = str.length();
    int i = 0, j = 0, starIdx = -1, match = 0;

    while (j < m) {
        if (i < n && (wild[i] == str[j] || wild[i] == '?')) {
            i++;
            j++;
        }
        else if (i < n && wild[i] == '*') {
            starIdx = i;
            match = j;
            i++;
        }
        else if (starIdx != -1) {
            i = starIdx + 1;
            match++;
            j = match;
        }
        else {
            return false;
        }
    }

    while (i < n && wild[i] == '*') {
        i++;
    }

    return i == n;
}

int main() {
    string wild, str;
    cout << "Enter wildcard pattern: ";
    cin >> wild;
    cout << "Enter string to match: ";
    cin >> str;

    if (isMatch(wild, str))
        cout << "The strings match." << endl;
    else
        cout << "The strings do not match." << endl;

    return 0;
}
