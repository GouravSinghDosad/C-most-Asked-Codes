#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> arr = {5, 2, 8, 1, 9};
    int minElement = INT_MAX;
    for (int num : arr) {
        if (num < minElement) minElement = num;
    }
    cout << "Smallest element: " << minElement << endl;
    return 0;
}
