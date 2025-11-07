class Solution {
public:
vector<vector<int>>dir{{1,0},{-1,0},{0,1},{0,-1}};
void dfs(vector<vector<int>>&grid,int i,int j,int color,int newcolor){
    if(i>=grid.size() || i<0 || j>=grid[0].size() || j<0 || grid[i][j]!=color){
        return;
    }
    grid[i][j]=newcolor;
    for(int d=0;d<4;d++){
        int ni=i+dir[d][0];
        int nj=j+dir[d][1];
        dfs(grid,ni,nj,color,newcolor);
    }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color){
            return image;
        }
        dfs(image,sr,sc,image[sr][sc],color);
        return image;
    }
};