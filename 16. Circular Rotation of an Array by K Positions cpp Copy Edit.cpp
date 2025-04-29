
#include <iostream>
#include <vector>
using namespace std;

void rotateArray(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n;  // To handle cases when k > n
    vector<int> temp(arr.end() - k, arr.end());
    arr.insert(arr.begin(), temp.begin(), temp.end());
    arr.resize(n);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int k = 2;
    rotateArray(arr, k);
    for (int i : arr) cout << i << " ";
    return 0;
}
