class Solution {
  public:
  void solve(int idx,int sum,int n,int k,vector<int>&temp,vector<vector<int>>&ans){
      if(temp.size()==k){
          if(sum==n){
              ans.push_back(temp);
          }
          return;
      }
      for(int i=idx;i<10;i++){
          if(sum+i>n){
              break;
          }
          temp.push_back(i);
          solve(i+1,sum+i,n,k,temp,ans);
          temp.pop_back();
      }
  }
    vector<vector<int>> combinationSum(int n, int k) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(1,0,n,k,temp,ans);
        return ans;
    }
};