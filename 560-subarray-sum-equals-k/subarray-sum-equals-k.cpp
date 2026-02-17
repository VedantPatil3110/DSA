class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        map<int,int>mp;
        int sum=0;
        mp[sum]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int x=sum-k;
            ans+=mp[x];
            mp[sum]++;
        }
        return ans;
    }
};