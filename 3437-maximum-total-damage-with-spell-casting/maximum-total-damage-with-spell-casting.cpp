class Solution {
public:
    long long solve(int i, vector<int>& vals, unordered_map<int,long long>& freq, vector<long long>& dp) {
        if (i < 0) return 0;
        if (dp[i] != -1) return dp[i];
        long long skip = solve(i - 1, vals, freq, dp);
        long long take = freq[vals[i]];
        int j = i - 1;
        while (j >= 0 && vals[j] >= vals[i] - 2) j--;
        take += solve(j, vals, freq, dp);
        return dp[i] = max(skip, take);
    }
    long long maximumTotalDamage(vector<int>& power) {
        unordered_map<int,long long> freq;
        for (int d : power) freq[d] += d;
        vector<int> vals;
        for (auto &it : freq) vals.push_back(it.first);
        sort(vals.begin(), vals.end());
        vector<long long> dp(vals.size(), -1);
        return solve((int)vals.size() - 1, vals, freq, dp);
    }
};