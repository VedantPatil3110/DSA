class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int sum=0;
        while(i<n){
            int start=max(0,i-nums[i]);
            for(int j=start;j<=i;j++){
                sum+=nums[j];
            }
            i++;
        }
        return sum;
    }
};