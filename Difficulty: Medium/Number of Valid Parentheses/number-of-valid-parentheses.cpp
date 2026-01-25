class Solution {
  public:
  int solve(vector<int>&dp,int n){
      if(dp[n]!=-1){
          return dp[n];
      }
      if(n==0){
          return 1;
      }
      int ans=0;
      for(int i=0;i<n;i++){
          ans+=solve(dp,i)*solve(dp,n-2-i);
      }
      return dp[n]=ans;
  }
    int findWays(int n) {
        if(n%2!=0){
            return 0;
        }
        vector<int>dp(n+1,-1);
        return solve(dp,n);
    }
};