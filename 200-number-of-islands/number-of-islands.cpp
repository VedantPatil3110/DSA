class Solution {
public:
void island(vector<vector<char>>&grid,int i,int j){
    if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]=='0'||grid[i][j]=='2'){
        return;
    }
    grid[i][j]='2';
    island(grid,i+1,j);
    island(grid,i-1,j);
    island(grid,i,j+1);
    island(grid,i,j-1);
}
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    count++;
                    island(grid,i,j);
                }
            }
        }
        return count;
    }
};