//Problem Solving Day 1

#include <iostream>
#include <vector>
using namespace std;

// Function to find the unique element in the array using XOR
int findUnique(vector<int> arr) {
    int ans = 0;
    for (int i = 0; i < arr.size(); i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {
    int n;
    
    // Ask the user to enter the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;
    
    vector<int> arr(n);

    // Ask the user to enter the elements separated by spaces
    cout << "Enter the elements separated by spaces: ";
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }

    // Display the array elements
    cout << "Array elements: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    // Call the findUnique function to find the unique element
    int uniqueElement = findUnique(arr);
    
    // Display the unique element
    cout << "The unique element is: " << uniqueElement << endl;

    return 0;
}
