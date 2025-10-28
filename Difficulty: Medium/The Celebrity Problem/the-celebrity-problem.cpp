class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        int n=mat.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            st.push(i);
        }
        while(st.size()>1){
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            if(mat[a][b]==1){
                st.push(b);
            }
            else{
                st.push(a);
            }
        }
        int ans=st.top();
        for(int i=0;i<n;i++){
            if(i!=ans && (mat[i][ans]==0 || mat[ans][i]==1)){
                return -1;
            }
        }
        return ans;
    }
};