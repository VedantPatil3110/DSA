class Solution {
public:
int solve(int i,int n,vector<int>&dp,vector<int>&cost){
    if(i>=n){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    int ans=INT_MAX;
    for(int j=1;j<=3;j++){
        int k=i+j;
        if(k<=n){
            int ui=cost[k-1]+j*j;
            ans=min(ans,ui+solve(k,n,dp,cost));
        }
    }
    return dp[i]=ans;
}
    int climbStairs(int n, vector<int>& costs) {
        vector<int>dp(n+1,-1);
        return solve(0,n,dp,costs);
    }
};