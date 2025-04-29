#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {5, 2, 9, 1, 5, 6};
    sort(arr.begin(), arr.end());
    for (int num : arr) cout << num << " ";
    return 0;
}
