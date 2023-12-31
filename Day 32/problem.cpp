#include <bits/stdc++.h>
using namespace std;

void printSubsequences(vector<int>& arr, int index, vector<int>& subarr, int n) {
    // Base case: If the current index is equal to the size of the array
    if (index == n) {
        // Print the current subsequence
        for (int i = 0; i < subarr.size(); i++) {
            cout << subarr[i] << " ";
        }
        cout << endl;
        return;
    }

    // Recursive case:

    // Include the current element in the subsequence
    subarr.push_back(arr[index]);
    printSubsequences(arr, index + 1, subarr, n);

    // Exclude the current element from the subsequence
    subarr.pop_back();
    printSubsequences(arr, index + 1, subarr, n);
}


int main() {
    vector<int> arr = {1, 2, 3};
    int n = arr.size();
    vector<int> subarr;

    printSubsequences(arr, 0, subarr, n);

    return 0;
}
