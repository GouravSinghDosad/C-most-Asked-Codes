// An inversion is a pair of elements in an array such that the larger element comes before the smaller element.

#include <iostream>
#include <vector>
using namespace std;

int countInversions(const vector<int>& arr) {
    int inversions = 0;
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) inversions++;
        }
    }
    return inversions;
}

int main() {
    vector<int> arr = {2, 3, 8, 6, 1};
    cout << "Inversions: " << countInversions(arr) << endl;
    return 0;
}
