// User function template in C++

class Solution {
  public:
    // Function to find total number of unique paths.
    int solve(int i,int j,int n,int m,vector<vector<int>>&dp){
        if(i>n-1 || j>m-1){
            return 0;
        }
        if(i==n-1 && j==m-1){
            return 1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int down=solve(i+1,j,n,m,dp);
        int right=solve(i,j+1,n,m,dp);
        return dp[i][j]=down+right;
    }
    int NumberOfPath(int a, int b) {
        vector<vector<int>>dp(a+1,vector<int>(b+1,-1));
        return solve(0,0,a,b,dp);
    }
};
