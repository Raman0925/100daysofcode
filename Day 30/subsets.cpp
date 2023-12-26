class Solution {
public:
    void helper(int ind, vector<int>& nums, vector<vector<int>>& res, vector<int>& curr) {
        if (ind == nums.size()) {
            res.push_back(curr);
            return;
        }
        // Include the current element
        curr.push_back(nums[ind]);
        helper(ind + 1, nums, res, curr);
        // Exclude the current element
        curr.pop_back();
        helper(ind + 1, nums, res, curr);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> curr;
        helper(0, nums, res, curr);
        return res;
    }
};
