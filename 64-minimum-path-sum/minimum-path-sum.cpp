class Solution {
public:
int solve(int i,int j,vector<vector<int>>&grid,vector<vector<int>>&dp){
    if(i>=grid.size()||j>=grid[0].size()){
        return INT_MAX;
    }
    if(i==grid.size()-1&&j==grid[0].size()-1){
        return grid[i][j];
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int up=solve(i,j+1,grid,dp);
    int down=solve(i+1,j,grid,dp);
    return dp[i][j]=grid[i][j]+min(up,down);
}
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>>dp(grid.size()+1,vector<int>(grid[0].size()+1,-1));
        return solve(0,0,grid,dp);
    }
};