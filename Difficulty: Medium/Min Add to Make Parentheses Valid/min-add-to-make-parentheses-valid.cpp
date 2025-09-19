class Solution {
  public:
    int minParentheses(string& s) {
        stack<char>st;
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push('(');
            }
            else if(s[i]==')'){
                if(st.empty()){
                    count++;
                }
                else{
                    st.pop();
                }
            }
        }
        if(st.size()>0){
            count+=st.size();
        }
        return count;
    }
};