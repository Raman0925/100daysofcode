#include <vector>
#include <algorithm>

class Solution {
public:
    int helper(int ind, vector<int>& cost) {
        // Base case: If we are at the first or second step, return the cost of that step.
        if (ind <= 1) {
            return cost[ind];
        }

        // Recursive case: Calculate the minimum cost to reach the current step.
        // The cost to reach the current step is the cost of the current step plus the minimum
        // cost of reaching the previous step or the step before the previous one.
        return cost[ind] + min(helper(ind - 1, cost), helper(ind - 2, cost));
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();

        // Calculate the minimum cost to reach the last step using the helper function.
        return min(helper(n - 1, cost), helper(n - 2, cost));
    }
};
