#include <iostream>
#include <vector>
#include <algorithm>

int findPairs(std::vector<int>& nums, int k) {
    int count = 0;
    int n = nums.size();

    for (int i = 0; i < n; ++i) {
        // Binary search for the right boundary of the pair
        int low = i + 1, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int diff = std::abs(nums[mid] - nums[i]);

            if (diff == k) {
                count++;
                break;  // Move to the next i to avoid duplicates
            } else if (diff < k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        // Skip duplicate elements
        while (i < n - 1 && nums[i] == nums[i + 1]) {
            i++;
        }
    }

    return count;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int k = 2;

    std::sort(nums.begin(), nums.end());  // Ensure the array is sorted

    int result = findPairs(nums, k);

    std::cout << "Number of " << k << "-diff pairs: " << result << std::endl;

    return 0;
}
