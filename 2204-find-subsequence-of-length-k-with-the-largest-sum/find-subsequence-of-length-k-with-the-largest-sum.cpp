class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>p;
        vector<int>ans(nums.size(),INT_MIN);
        for(int i=0;i<nums.size();i++){
            p.push({nums[i],i});
        }
        for(int i=0;i<k;i++){
            ans[p.top().second]=p.top().first;
            p.pop();
        }
        // reverse(ans.begin(),ans.end());
        ans.erase(remove(ans.begin(),ans.end(),INT_MIN),ans.end());
        return ans;
    }
};