class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        deque<int>dq;
        int n=arr.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(!dq.empty() && dq.front()<=i-k){
                dq.pop_front();
            }
            if(arr[i]<0){
                dq.push_back(i);
            }
            if(i>=k-1){
                if(!dq.empty()){
                    ans.push_back(arr[dq.front()]);
                }
                else{
                    ans.push_back(0);
                }
            }
        }
        return ans;
    }
};