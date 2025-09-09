# define mod 1000000007;
class Solution {
public:
int solve(vector<int>&dp,int day,int n, int delay,int forget){
    if(dp[day]!=-1){
        return dp[day];
    }
    if(day>=n){
        return 1; 
    }
    int ans=1;
    for(int j=day+delay;j<=min(day+forget,n);j++){
        if(j==day+forget){
            ans-=1;
            break;
        }
        ans=(ans+solve(dp,j,n,delay,forget))%mod;
    }
    return dp[day]=ans%mod;
}
    int peopleAwareOfSecret(int n, int delay, int forget) {
        vector<int>dp(n+1,-1);
        return solve(dp,1,n,delay,forget);
    }
};