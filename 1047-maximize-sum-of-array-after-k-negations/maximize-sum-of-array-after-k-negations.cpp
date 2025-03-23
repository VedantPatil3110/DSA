class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>p;
        for(int i=0;i<nums.size();i++){
            p.push(nums[i]);
        }
        for(int i=0;i<k;i++){
            int x=-(p.top());
            if(x==0){
                break;
            }
            p.pop();
            p.push(x);
        }
        int sum=0;
        while(!p.empty()){
            sum+=p.top();
            p.pop();
        }
        return sum;
    }
};