class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int maxi=0;
        int ans=0;
        for(auto x:mp){
            if(maxi<x.second){
                ans=x.first;
                maxi=x.second;
            }
        }
        return ans;
    }
};