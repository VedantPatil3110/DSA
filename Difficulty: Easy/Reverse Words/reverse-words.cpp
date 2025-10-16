class Solution {
  public:
    string reverseWords(string &s) {
        stack<string>st;
        string temp="";
        for(int i=0;i<s.size();i++){
            if(int(s[i])>=97 && int(s[i])<=122){
                temp+=s[i];
            }
            if(!temp.empty() && int(s[i])<97 || int(s[i])>122){
                st.push(temp);
                temp.clear();
            }
        }
        if (!temp.empty()) st.push(temp);
        if(st.size()==1){
            return st.top();
        }
        string ans="";
        ans+=st.top();
        st.pop();
        while(!st.empty()){
            ans+='.';
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};