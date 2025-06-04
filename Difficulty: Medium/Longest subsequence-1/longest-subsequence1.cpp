
class Solution {
  public:
  int solve(int i,int j,vector<int>&arr,vector<vector<int>>&dp){
      if(i>=arr.size()){
          return 0;
      }
      if(dp[i][j+1]!=-1){
          return dp[i][j+1];
      }
      int take=0;
      int nottake=solve(i+1,j,arr,dp);
      if(j==-1||abs(arr[i]-arr[j])==1){
          take=1+solve(i+1,i,arr,dp);
      }
      return dp[i][j+1]=max(take,nottake);
  }
    int longestSubseq(vector<int> &arr) {
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return solve(0,-1,arr,dp);
    }
};
