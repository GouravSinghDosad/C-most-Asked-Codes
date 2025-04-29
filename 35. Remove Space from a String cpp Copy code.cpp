#include <iostream>
using namespace std;

void removeSpaces(string& str) {
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
}

int main() {
    string str = "Hello World!";
    removeSpaces(str);
    cout << "String without spaces: " << str << endl;
    return 0;
}
