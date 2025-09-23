    bool compare(string& s1, string& s2){
        if(s1+s2 >s2+s1){
            return true;
        }
        return false;
    }
class Solution {
  public:
    string findLargest(vector<int> &arr) {
        vector<string>a;
        for(auto x:arr){
            a.push_back(to_string(x));
        }
        sort(a.begin(),a.end(),compare);
        if(a[0]=="0"){
            return "0";
        }
        string ans="";
        for(auto x:a){
            ans+=x;
        }
        return ans;
    }
};