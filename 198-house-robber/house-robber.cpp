class Solution {
public:
// int solve(int i,vector<int>& nums,vector<int>&dp){
//     if(i==0){
//         return nums[i];
//     }
//     if(i<0){
//         return 0;
//     }
//     if(dp[i]!=-1){
//         return dp[i];
//     }
//     int pick=nums[i]+solve(i-2,nums,dp);
//     int notpick=solve(i-1,nums,dp);
//     return dp[i]=max(pick,notpick);
// }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        if(n==2){
            return max(nums[0],nums[1]);
        }
        vector<int>dp(n+1,-1);
        // return solve(n-1,nums,dp);
        dp[n-1]=nums[n-1];
        dp[n-2]=max(nums[n-2],nums[n-1]);
        for(int i=n-3;i>=0;i--){
            dp[i]=max(nums[i]+dp[i+2],0+dp[i+1]);
        }
        return dp[0];
    }
};