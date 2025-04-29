#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    reverse(arr.begin(), arr.end());
    cout << "Reversed Array: ";
    for (int num : arr) cout << num << " ";
    return 0;
}
