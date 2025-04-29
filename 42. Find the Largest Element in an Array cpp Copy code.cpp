#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {5, 7, 2, 9, 3};
    int maxElement = arr[0];
    for (int num : arr) {
        if (num > maxElement) {
            maxElement = num;
        }
    }
    cout << "Largest element: " << maxElement << endl;
    return 0;
}
