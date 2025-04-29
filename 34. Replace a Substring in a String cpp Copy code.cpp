#include <iostream>
#include <string>
using namespace std;

void replaceSubstring(string& str, const string& oldSubstr, const string& newSubstr) {
    size_t pos = str.find(oldSubstr);
    if (pos != string::npos) {
        str.replace(pos, oldSubstr.length(), newSubstr);
    }
}

int main() {
    string str = "Hello World";
    replaceSubstring(str, "World", "Universe");
    cout << "Modified string: " << str << endl;
    return 0;
}
