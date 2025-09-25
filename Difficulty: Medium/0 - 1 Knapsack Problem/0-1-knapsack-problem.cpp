class Solution {
  public:
  int solve(int i,int w,vector<vector<int>>&dp,vector<int>&val,vector<int>&wt){
      if(i>=val.size() || w==0){
          return 0;
      }
      if(dp[i][w]!=-1){
          return dp[i][w];
      }
      int nottake=solve(i+1,w,dp,val,wt);
      int take=INT_MIN;
      if(wt[i]<=w){
          take=val[i]+solve(i+1,w-wt[i],dp,val,wt);
      }
      return dp[i][w]=max(take,nottake);
  }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        int n=val.size();
        vector<vector<int>>dp(n+1,vector<int>(W+1,-1));
        return solve(0,W,dp,val,wt);
    }
};