class Solution {
  public:
  bool safe(int i,int j,int n,int m){
      if(i<n && i>=0 && j<m && j>=0){
          return true;
      }
      return false;
  }
  void dfs(vector<vector<char>>&grid,int i,int j,int n,int m){
      grid[i][j]='A';
      for(int k=0;k<4;k++){
          int ni=i+dir[k][0];
          int nj=j+dir[k][1];
          if(safe(ni,nj,n,m) && grid[ni][nj]=='O'){
              dfs(grid,ni,nj,n,m);
          }
      }
  }
  vector<vector<int>>dir={{1,0},{-1,0},{0,1},{0,-1}};
    void fill(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            if(grid[i][0]=='O'){
                dfs(grid,i,0,n,m);
            }
        }
        for(int i=0;i<n;i++){
            if(grid[i][m-1]=='O'){
                dfs(grid,i,m-1,n,m);
            }
        }
        for(int j=0;j<m;j++){
            if(grid[0][j]=='O'){
                dfs(grid,0,j,n,m);
            }
        }
        for(int j=0;j<m;j++){
            if(grid[n-1][j]=='O'){
                dfs(grid,n-1,j,n,m);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='A'){
                    grid[i][j]='O';
                }
                else{
                    grid[i][j]='X';
                }
            }
        }
    }
};