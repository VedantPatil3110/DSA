class Solution {
  public:
  int solve(vector<int>&arr,vector<vector<int>>&dp,int i,int n,int target){
      if(i==n){
          if(target==0){
              return 1;
          }
          else{
              return 0;
          }
      }
      if(dp[i][target]!=-1){
          return dp[i][target];
      }
      int take=0;
      if(arr[i]<=target){
          take=solve(arr,dp,i+1,n,target-arr[i]);
      }
      int nottake=solve(arr,dp,i+1,n,target);
      return dp[i][target]=take+nottake;
  }
    int perfectSum(vector<int>& arr, int target) {
        vector<vector<int>>dp(arr.size()+1,vector<int>(target+1,-1));
        return solve(arr,dp,0,arr.size(),target);
    }
};