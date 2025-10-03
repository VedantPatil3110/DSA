class Solution {
  public:
  void solve(int i,int n,vector<int>&arr,vector<string>&ans,vector<string>alpha,string temp){
      if(i>=n){
          ans.push_back(temp);
          return;
      }
      if(arr[i]==0||arr[i]==1){
          solve(i+1,n,arr,ans,alpha,temp);
      }
      else{
          for(char c:alpha[arr[i]]){
              temp.push_back(c);
              solve(i+1,n,arr,ans,alpha,temp);
              temp.pop_back();
          }
      }
  }
    vector<string> possibleWords(vector<int> &arr) {
        vector<string>alpha={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int n=arr.size();
        vector<string>ans;
        string temp;
        solve(0,n,arr,ans,alpha,temp);
        return ans;
    }
};