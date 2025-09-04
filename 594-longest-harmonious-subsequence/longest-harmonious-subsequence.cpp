class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int>mp;
        for(auto &n:nums){
            mp[n]++;
        }
        int result=0;
        for(int i=0;i<nums.size();i++){
            int b=mp.count(nums[i]+1);
            if(b){
                result=max(result,mp[nums[i]]+mp[nums[i]+1]);
            }
        }
        return result;
    }
};