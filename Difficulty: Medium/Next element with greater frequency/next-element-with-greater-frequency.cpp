class Solution {
  public:
    vector<int> nextFreqGreater(vector<int>& arr) {
        int n=arr.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        stack<int>st;
        vector<int>ans(arr.size());
        ans[arr.size()-1]=-1;
        st.push(arr[arr.size()-1]);
        for(int i=arr.size()-2;i>=0;i--){
            while(!st.empty() && mp[st.top()]<=mp[arr[i]]){
                st.pop();
            }
            if(st.empty()){
                ans[i]=-1;
            }
            else{
                ans[i]=st.top();
            }
            st.push(arr[i]);
        }
        return ans;
    }
};
