#include <bits/stdc++.h>
using namespace std;

void helper(int n, int open, int close, vector<string>& res, string curr) {
    if (close == n) {
        res.push_back(curr);
        return;
    }
    if (open < n)
        helper(n, open + 1, close, res, curr + '(');
    if (open > close)
        helper(n, open, close + 1, res, curr + ')');
}

vector<string> generateParenthesis(int n) {
    vector<string> res;
    helper(n, 0, 0, res, "");
    return res;
}
