class Solution {
public:
    vector<int> findSubarray(vector<int>& arr) {
        vector<int> ans;
        vector<int> maxi;
        int sum = 0;
        int maxii = INT_MIN;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] >= 0) {
                sum += arr[i];
                maxi.push_back(arr[i]);
                if (sum > maxii || (sum == maxii && maxi.size() > ans.size())) {
                    maxii = sum;
                    ans = maxi;
                }
            } else {
                sum = 0;
                maxi.clear();
            }
        }

        if (ans.empty()) return {-1};
        return ans;
    }
};