class Solution {
public:
vector<pair<int,int>>v;
void dfs(vector<vector<int>>&grid,int row,int col,int color,int original){
    if(row<0||col<0||row>=grid.size()||col>=grid[0].size()||grid[row][col]!=original){
        return;
    }
    grid[row][col]=-color;
    dfs(grid,row+1,col,color,original);
    dfs(grid,row-1,col,color,original);
    dfs(grid,row,col+1,color,original);
    dfs(grid,row,col-1,color,original);
    if(not (row==0||col==0||row==grid.size()-1||col==grid[0].size()-1||grid[row+1][col]!=-color||grid[row-1][col]!=-color||grid[row][col+1]!=-color||grid[row][col-1]!=-color)){
        v.push_back({row,col});
    }
}
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        if(grid[row][col]==color){
            return grid;
        }
        int original=grid[row][col];
        dfs(grid,row,col,color,original);
        for(auto u:v){
            int i=u.first;
            int j=u.second;
            grid[i][j]=original;
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]<0){
                    grid[i][j]*=-1;
                }
            }
        }
        return grid;
    }
};