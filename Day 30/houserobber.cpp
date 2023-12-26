#include <vector>
using namespace std;

class Solution {
public:
    int helper(vector<int>& nums, int ind) {
        if (ind >= nums.size()) {
            return 0;
        }

        int rob = nums[ind] + helper(nums, ind + 2);
        int dontRob = helper(nums, ind + 1);
        return max(rob, dontRob);
    }

    int rob(vector<int>& nums) {
        return helper(nums, 0);
    }
};
