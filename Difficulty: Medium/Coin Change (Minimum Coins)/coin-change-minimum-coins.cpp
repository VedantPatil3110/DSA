class Solution {
  public:
  vector<int>dp;
  int f(vector<int> &coins, int sum){
      if(sum==0){
          return 0;
      }
      if(sum<0){
          return INT_MAX;
      }
      if(dp[sum]!=-1){
          return dp[sum];
      }
      int ans=INT_MAX;
      for(int i=0;i<coins.size();i++){
          int aans=f(coins,sum-coins[i]);
          if(aans!=INT_MAX){
              ans=min(aans+1,ans);
          }
      }
      return dp[sum]=ans;
  }
    int minCoins(vector<int> &coins, int sum) {
        dp.resize(sum+1,-1);
       int ans=f(coins,sum);
       return ans==INT_MAX?-1:ans;
    }
};