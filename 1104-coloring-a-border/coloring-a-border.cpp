class Solution {
public:
vector<pair<int,int>>internal;
void dfs(vector<vector<int>>&grid,int r,int c,int newcolor,int originalcolor){
    if(r<0||c<0||r>=grid.size()||c>=grid[0].size()||grid[r][c]!=originalcolor){
        return;
    }
    grid[r][c]=-newcolor;
    dfs(grid,r+1,c,newcolor,originalcolor);
    dfs(grid,r,c+1,newcolor,originalcolor);
    dfs(grid,r-1,c,newcolor,originalcolor);
    dfs(grid,r,c-1,newcolor,originalcolor);

    if(not (r==0||c==0||r==grid.size()-1||c==grid[0].size()-1||grid[r+1][c]!=-newcolor||grid[r-1][c]!=-newcolor||grid[r][c+1]!=-newcolor||grid[r][c-1]!=-newcolor)){
        internal.push_back({r,c});
    }
}
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        int originalcolor=grid[row][col];
        if(originalcolor==color){
            return grid;
        }
        dfs(grid,row,col,color,originalcolor);
        for(auto p:internal){
            int i=p.first;
            int j=p.second;
            grid[i][j]=originalcolor; 
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