#include <iostream>
#include <vector>

int binarySearchRecursive(const std::vector<int>& arr, int target, int low, int high) {
    if (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if the target is at the middle position
        if (arr[mid] == target) {
            return mid;
        }

        // If the target is smaller, search in the left half
        else if (arr[mid] > target) {
            return binarySearchRecursive(arr, target, low, mid - 1);
        }

        // If the target is larger, search in the right half
        else {
            return binarySearchRecursive(arr, target, mid + 1, high);
        }
    }

    // If the target is not in the array
    return -1;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 7;
    int result = binarySearchRecursive(arr, target, 0, arr.size() - 1);

    if (result != -1) {
        std::cout << "Element found at index " << result << std::endl;
    } else {
        std::cout << "Element not found in the array" << std::endl;
    }

    return 0;
}
