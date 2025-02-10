class Solution {
public:
    string clearDigits(string s) {
        int n=s.size();
        stack<char>st;
        for(int i=0;i<n;i++){
            if(isdigit(s[i])&&st.size()>0){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string result="";
        while(st.size()>0){
            result+=st.top();
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};