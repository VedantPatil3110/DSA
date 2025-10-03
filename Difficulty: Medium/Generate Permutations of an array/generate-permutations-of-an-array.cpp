class Solution {
  public:
  void solve(int idx,vector<vector<int>>&ans,vector<int>&arr){
      if(idx==arr.size()){
          ans.push_back(arr);
          return;
      }
      for(int i=idx;i<arr.size();i++){
          swap(arr[idx],arr[i]);
          solve(idx+1,ans,arr);
          swap(arr[idx],arr[i]);
      }
  }
    vector<vector<int>> permuteDist(vector<int>& arr) {
        vector<vector<int>>ans;
        solve(0,ans,arr);
        return ans;
    }
};