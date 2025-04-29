#include <iostream>
#include <string>
using namespace std;

bool match(const string& pattern, const string& str) {
    if (pattern.empty()) return str.empty();
    if (pattern[0] == '*') return match(pattern.substr(1), str) || (!str.empty() && match(pattern, str.substr(1)));
    return !str.empty() && (pattern[0] == str[0] || pattern[0] == '?') && match(pattern.substr(1), str.substr(1));
}

int main() {
    string pattern = "a?c*";
    string str = "abc";
    if (match(pattern, str)) cout << "Strings match" << endl;
    else cout << "Strings do not match" << endl;
    return 0;
}
