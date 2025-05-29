class Solution {

  public:
  int solve(int n,vector<int>&dp){
      if(n<=1){
          return 0;
      }
      if(n==2 || n==3){
          return 1;
      }
      if(dp[n]!=-1){
          return dp[n];
      }
      int a=INT_MAX;
      int b=INT_MAX;
      int c=INT_MAX;
      if(n%2==0){
          a=solve(n/2,dp);
      }
      if(n%3==0){
          b=solve(n/3,dp);
      }
      else{
          c=solve(n-1,dp);
      }
      return dp[n]=1+min(a,min(b,c));
  }
    int minSteps(int N) {
        vector<int>dp(N+1,-1);
        return solve(N,dp);
    }
};
