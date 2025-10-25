class Solution {
  public:
    int minOperations(vector<int>& arr) {
        double sum=0;
        double half=0;
        priority_queue<double>pq;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            pq.push(arr[i]);
        }
        half=sum/2.0;
        int ans=0;
        while(sum>half){
            ans++;
            double temp=pq.top();
            pq.pop();
            sum-=temp;
            sum+=temp/2.0;
            pq.push(temp/2.0);
        }
        return ans;
    }
};