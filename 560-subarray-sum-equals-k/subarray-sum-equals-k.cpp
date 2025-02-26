class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> pre(n, 0);
        int count = 0;
        pre[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            pre[i] = pre[i - 1] + nums[i];
        }
        unordered_map<int,int> m;
        for (int i = 0; i < pre.size(); i++) {
            if (pre[i] == k) {
                count++;
            }
            int a = pre[i] - k;
            if (m.find(a) != m.end()) {
                count+=m[a];
            }
            m[pre[i]]+=1;
        }
        return count;
    }
};