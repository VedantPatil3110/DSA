class Solution {
public:
int solve(int n,vector<int>&dp){
    if(n==2){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    long long  m=INT_MIN;
    for(int i=1;i<=n-1;i++){
        long long subproblem = solve(n - i, dp);
            long long ans = 1LL * i * max((long long)(n - i), subproblem);
            m = max(m, ans); 
    }
    dp[n]=(int)(m);
    return dp[n];
}
    int integerBreak(int n) {
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};