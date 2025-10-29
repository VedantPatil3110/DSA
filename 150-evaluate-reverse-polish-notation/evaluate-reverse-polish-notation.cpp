class Solution {
public:
bool isoperator(string x){
    if(x=="+" || x=="-" || x=="*" || x=="/"){
        return true;
    }
    return false;
}
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i=0;i<tokens.size();i++){
            if(!isoperator(tokens[i])){
                st.push(stoi(tokens[i]));
            }
            else{
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                string x=tokens[i];
                if(x=="+"){
                    st.push(b+a);
                }
                else if(x=="-"){
                    st.push(b-a);
                }
                else if(x=="*"){
                    st.push(b*a);
                }
                else{
                    st.push(b/a);
                }
            }
        }
        return st.top();
    }
};