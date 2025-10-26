class Solution {
  public:
    int minCost(vector<int>& arr) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<arr.size();i++){
            pq.push(arr[i]);
        }
        int sum=0;
        if(pq.size()==1){
            return 0;
        }
        while(pq.size()>1){
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            int c=a+b;
            sum+=c;
            pq.push(c);
        }
        return sum;
    }
};