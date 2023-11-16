#include <iostream>
#include <vector>
using namespace std;

void mergeSorted(vector<int>& sorted1, vector<int>& sorted2, vector<int>& merge) {
    int i = 0, j = 0;
    int n1 = sorted1.size();
    int n2 = sorted2.size();

    while (i < n1 && j < n2) {
        if (sorted1[i] <= sorted2[j]) {
            merge.push_back(sorted1[i]);
            i++;
        } else {
            merge.push_back(sorted2[j]);
            j++;
        }
    }

    // If there are remaining elements in sorted1, append them to merge
    while (i < n1) {
        merge.push_back(sorted1[i]);
        i++;
    }

    // If there are remaining elements in sorted2, append them to merge
    while (j < n2) {
        merge.push_back(sorted2[j]);
        j++;
    }
}

int main() {
    // Example usage
    vector<int> sorted1 = {1, 3, 5, 7};
    vector<int> sorted2 = {2, 4, 6, 8};
    vector<int> merged;

    mergeSorted(sorted1, sorted2, merged);

    // Display the merged vector
    cout << "Merged Vector: ";
    for (int num : merged) {
        cout << num << " ";
    }

    return 0;
}
