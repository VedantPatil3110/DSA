class Solution {
public:
    int solve(vector<int>& values,int i,int j,vector<vector<int>>&dp){
        if(i==j-1)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int ans=INT_MAX;
        for(int k=i+1;k<j;k++){
            int t=values[i]*values[j]*values[k]+solve(values,i,k,dp)+solve(values,k,j,dp);
            ans=min(ans,t);
        }
        return dp[i][j]=ans;
    }
    int minScoreTriangulation(vector<int>& values) {
        int i=0;
        int j=values.size()-1;
        int n=values.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return solve(values,i,j,dp);
    }
};