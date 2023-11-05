//Two Sum



#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size. Please enter a positive integer." << endl;
        return 1;
    }

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum;
    cout << "Enter the target sum: ";
    cin >> sum;

    int i = 0;
    int j = arr.size() - 1;

    while (i < j) {
        int currentSum = arr[i] + arr[j];
        if (currentSum == sum) {
            cout << "Pair found: " << arr[i] << " " << arr[j] << endl;
            break;
        } else if (currentSum < sum) {
            i++;
        } else {
            j--;
        }
    }

    if (i >= j) {
        cout << "No pair found that adds up to the target sum." << endl;
    }

    return 0;
}