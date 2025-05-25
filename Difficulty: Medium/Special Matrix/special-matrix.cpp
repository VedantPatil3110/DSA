class Solution {
  public:
  int mod = 1e9 + 7;
  int solve(int i,int j,int n,int m,vector<vector<int>>&vis,vector<vector<int>>&dp){
      if(i>n || j>m || vis[i][j]!=0){
          return 0;
      }
      if(i==n && j==m){
          return 1; 
      }
      if(dp[i][j]!=-1){
          return dp[i][j];
      }
       dp[i][j]=(solve(i+1,j,n,m,vis,dp)%mod+solve(i,j+1,n,m,vis,dp)%mod)%mod;
       return dp[i][j];
  }
    int FindWays(int n, int m, vector<vector<int>> blocked_cells) {
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        vector<vector<int>>vis(n+1,vector<int>(m+1,0));
        for(auto e:blocked_cells){
            int u=e[0];
            int v=e[1];
            vis[u][v]=1;
        }
        return solve(1,1,n,m,vis,dp)%mod;
    }
};