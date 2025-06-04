class Solution {
public:
int solve(int i,int j,string &s1, string &s2,vector<vector<int>>&dp){
    if(i>=s1.length()||j>=s2.length()){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int ans=0;
    if(s1[i]==s2[j]){
        ans=1+solve(i+1,j+1,s1,s2,dp);
    }
    else{
        ans=max(solve(i+1,j,s1,s2,dp),solve(i,j+1,s1,s2,dp));
    }
    return dp[i][j]=ans;
}
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>>dp(text1.length(),vector<int>(text2.length(),-1));
        return solve(0,0,text1,text2,dp);
    }
};