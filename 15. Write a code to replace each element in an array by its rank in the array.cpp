#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

void replaceWithRank(int arr[], int n) {
    // Create a vector of pairs where each pair contains (element, index)
    vector<pair<int, int>> sortedArr;
    
    for (int i = 0; i < n; i++) {
        sortedArr.push_back({arr[i], i});
    }

    // Sort the array based on the element values
    sort(sortedArr.begin(), sortedArr.end());

    // Create a map to store the rank of each element
    unordered_map<int, int> rankMap;

    // Assign ranks to the elements
    int rank = 1;
    for (int i = 0; i < n; i++) {
        if (i > 0 && sortedArr[i].first != sortedArr[i - 1].first) {
            rank++;
        }
        rankMap[sortedArr[i].first] = rank;
    }

    // Replace each element in the original array with its rank
    for (int i = 0; i < n; i++) {
        arr[i] = rankMap[arr[i]];
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    replaceWithRank(arr, n);

    cout << "Array with ranks:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
