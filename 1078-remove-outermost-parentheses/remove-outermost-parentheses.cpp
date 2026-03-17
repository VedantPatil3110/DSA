class Solution {
public:
    string removeOuterParentheses(string s) {
       int d=0;
       string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' && d==0){
                d++;
            }
            else if(s[i]=='(' && d>=1){
                ans.push_back('(');
                d++;
            }
            else if(s[i]==')' && d==1){
                d--;
            }
            else if(s[i]==')' && d>1){
                ans.push_back(')');
                d--;
            }
        }
        return ans;
    }
};