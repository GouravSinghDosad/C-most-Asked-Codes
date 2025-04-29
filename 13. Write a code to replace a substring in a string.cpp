#include <iostream>
using namespace std;

int main() {
    string str, toReplace, replaceWith;
    cout << "Enter the original string: ";
    getline(cin, str);

    cout << "Enter the substring to replace: ";
    getline(cin, toReplace);

    cout << "Enter the new substring: ";
    getline(cin, replaceWith);

    size_t pos = str.find(toReplace);

    if (pos != string::npos) {
        str.replace(pos, toReplace.length(), replaceWith);
        cout << "Updated string: " << str << endl;
    } else {
        cout << "Substring not found!" << endl;
    }

    return 0;
}
