#include <iostream>
using namespace std;

void removeNonAlphabets(string& str) {
    string result = "";
    for (char ch : str) {
        if (isalpha(ch)) result += ch;
    }
    str = result;
}

int main() {
    string str = "Hello 123, World! 456.";
    removeNonAlphabets(str);
    cout << "Modified string: " << str << endl;
    return 0;
}
