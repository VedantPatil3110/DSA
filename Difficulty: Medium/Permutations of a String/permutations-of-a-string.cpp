class Solution {
  public:
  void solve(string &s,int start,set<string>&a){
      if(start==s.size()){
          a.insert(s);
          return;
      }
      for(int i=start;i<s.size();i++){
          swap(s[start],s[i]);
          solve(s,start+1,a);
          swap(s[start],s[i]);
      }
  }
    vector<string> findPermutation(string &s) {
        set<string>a;
        vector<string>ans;
        solve(s,0,a);
        for(auto x:a){
            ans.push_back(x);
        }
        return ans;
    }
};
