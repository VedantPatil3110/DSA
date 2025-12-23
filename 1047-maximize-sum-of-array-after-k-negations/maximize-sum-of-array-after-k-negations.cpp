class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int ans=0;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        for(int i=0;i<k;i++){
            int a=pq.top();
            pq.pop();
            pq.push(-a);
        }
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};