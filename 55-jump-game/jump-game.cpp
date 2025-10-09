#include<bits/stdc++.h>
class Solution {
public:
bool solve(vector<int>&dp,vector<int>&nums,int idx){
    if(idx>=nums.size()-1){
        return true;
    }
    if(dp[idx]==0){
        return false;
    }
    if(dp[idx]!=-1){
        return dp[idx];
    }
    int far=min((int)nums.size()-1,idx+nums[idx]);
    for(int i=idx+1;i<=far;i++){
        if(i<nums.size() && solve(dp,nums,i)){
            return dp[idx]=true;
        }
    }
    return dp[idx]=false;
}
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return true;
        if(nums[0]==0){
            return false;
        }
        vector<int>dp(n+1,-1);
        return solve(dp,nums,0);
    }
};