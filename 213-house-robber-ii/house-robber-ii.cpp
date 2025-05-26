class Solution {
public:
int solve(int i,vector<int>&temp,vector<int>&dp){
    if(i>=temp.size()){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    int take=temp[i]+solve(i+2,temp,dp);
    int nottake=solve(i+1,temp,dp);
    return dp[i]=max(take,nottake);
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        if(n==1){
            return nums[0];
        }
        vector<int>temp1(nums.begin(),nums.end()-1);
        vector<int>temp2(nums.begin()+1,nums.end());
        vector<int>dp1(n+1,-1);
        vector<int>dp2(n+1,-1);
        return max(solve(0,temp1,dp1),solve(0,temp2,dp2));
    }
};