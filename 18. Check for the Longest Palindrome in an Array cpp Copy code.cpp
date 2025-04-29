#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPalindrome(const string& str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

string longestPalindrome(const vector<string>& arr) {
    string longest = "";
    for (const string& str : arr) {
        if (isPalindrome(str) && str.length() > longest.length()) {
            longest = str;
        }
    }
    return longest;
}

int main() {
    vector<string> arr = {"abc", "madam", "racecar", "level"};
    cout << "Longest palindrome: " << longestPalindrome(arr) << endl;
    return 0;
}
