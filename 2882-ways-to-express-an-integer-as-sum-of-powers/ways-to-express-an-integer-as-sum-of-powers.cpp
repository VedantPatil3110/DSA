# define mod 1000000007
class Solution {
public:
int fun(int n ,int x, int curr,vector<vector<int>>&dp){
    long long p=pow(curr,x);
    if(p>n){
        return 0;
    }
    if(p==n){
        return 1;
    }
    if(dp[n][curr]!=-1){
        return dp[n][curr];
    }
    int take=fun(n-p,x,curr+1,dp)%mod;
    int nottake=fun(n,x,curr+1,dp)%mod;
    return dp[n][curr]=(take+nottake)%mod;
}
    int numberOfWays(int n, int x) {
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return fun(n,x,1,dp);
    }
};