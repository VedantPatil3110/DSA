#include<bits/stdc++.h>
class Solution {
public:
int solve(int idx,vector<int>&e,int k,vector<int>&dp){
    if(idx==e.size()-1){
        return e[idx];
    }
    if(idx>=e.size()-1){
        return 0;
    }
    if(dp[idx]!=-1){
        return dp[idx];
    }
    dp[idx]=e[idx]+solve(idx+k,e,k,dp);
    return dp[idx];
}
    int maximumEnergy(vector<int>& energy, int k) {
        int n=energy.size();
        vector<int>dp(n+1,-1);
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            ans=max(ans,solve(i,energy,k,dp));
        }
        return ans;
    }
};