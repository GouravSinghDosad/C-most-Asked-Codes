#include <iostream>
#include <vector>
using namespace std;

int findLargestConsecutiveSubsequence(const vector<int>& arr) {
    int maxLength = 1, currentLength = 1;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] == arr[i - 1] + 1) {
            currentLength++;
        } else {
            maxLength = max(maxLength, currentLength);
            currentLength = 1;
        }
    }
    return max(maxLength, currentLength);
}

int main() {
    vector<int> arr = {1, 9, 3, 10, 4, 20, 2};
    cout << "Length of largest consecutive subsequence: " << findLargestConsecutiveSubsequence(arr) << endl;
    return 0;
}
