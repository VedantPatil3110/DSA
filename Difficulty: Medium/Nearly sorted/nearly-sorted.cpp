class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        vector<int>v;
        int n=arr.size();
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
            if(pq.size()>k){
                v.push_back(pq.top());
                pq.pop();
            }
        }
        while(!pq.empty()){
            v.push_back(pq.top());
            pq.pop();
        }
        arr.clear();
        arr=v;
    }
};