class Solution {
public:
    vector<string> ans;

    void solve(string &num, int target, int idx, long long currVal, long long prevNum, string expr) {
        int n = num.size();

        // Base case: end of string
        if (idx == n) {
            if (currVal == target)
                ans.push_back(expr);
            return;
        }

        for (int i = idx; i < n; i++) {
            // Prevent numbers with leading zeros
            if (i != idx && num[idx] == '0')
                break;

            string part = num.substr(idx, i - idx + 1);
            long long val = stoll(part);

            if (idx == 0) {
                // First number (no operator before it)
                solve(num, target, i + 1, val, val, part);
            } else {
                // Try '+'
                solve(num, target, i + 1, currVal + val, val, expr + "+" + part);

                // Try '-'
                solve(num, target, i + 1, currVal - val, -val, expr + "-" + part);

                // Try '*'
                solve(num, target, i + 1, currVal - prevNum + prevNum * val, prevNum * val, expr + "*" + part);
            }
        }
    }

    vector<string> findExpr(string &s, int target) {
        ans.clear();
        solve(s, target, 0, 0, 0, "");
        return ans;
    }
};
