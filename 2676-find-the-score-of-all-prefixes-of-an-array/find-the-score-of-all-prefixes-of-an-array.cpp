class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long>ans(nums.size());
        long long presum=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            maxi=max(nums[i],maxi);
            long long conver=nums[i]+maxi;
            presum+=conver;
            ans[i]=presum;
        }
        return ans;
    }
};