class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        vector<int>nse(arr.size(),-1);
        nse[arr.size()-1]=-1;
        stack<int>st;
        st.push(arr.size()-1);
        for(int i=arr.size()-2;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(!st.empty()){
                nse[i]=arr[st.top()];
            }
            st.push(i);
        }
        return nse;
    }
};