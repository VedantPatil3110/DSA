class Solution {
  public:
  string solve(int n){
      if(n==0){
          return "0";
      }
      string ans="";
      while(n>0){
          if(n%2==0){
              ans+='0';
          }
          else{
              ans+='1';
          }
          n/=2;
      }
      reverse(ans.begin(), ans.end());
      return ans;
  }
    vector<string> binstr(int n) {
        int a=pow(2,n);
        vector<string>ans;
        for(int i=0;i<a;i++){
            ans.push_back(solve(i));
        }
        for(int i=0;i<ans.size();i++){
            string temp=ans[i];
            while(temp.size()!=n){
                temp='0'+temp;
            }
            ans[i]=temp;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};