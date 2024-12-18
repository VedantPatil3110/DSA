class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int>st;
        int n=prices.size();
        vector<int>nse(n);
        nse[n-1]=0;
        st.push(prices[n-1]);
        for(int i=n-2;i>=0;i--){
            while(st.size()>0&&st.top()>prices[i]){
                st.pop();
            }
            if(st.size()==0){
                nse[i]=0;
            }
            else{
                nse[i]=st.top();
            }
            st.push(prices[i]);
        }
        for(int i=0;i<n;i++){
            nse[i]=prices[i]-(nse[i]);
        }
        return nse;
    }
};