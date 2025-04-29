#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void findNonRepeatingElements(const vector<int>& arr) {
    unordered_map<int, int> count;
    for (int num : arr) count[num]++;
    
    for (auto& pair : count) {
        if (pair.second == 1) cout << pair.first << " ";
    }
}

int main() {
    vector<int> arr = {4, 5, 6, 4, 7, 8, 6};
    findNonRepeatingElements(arr);
    return 0;
}
