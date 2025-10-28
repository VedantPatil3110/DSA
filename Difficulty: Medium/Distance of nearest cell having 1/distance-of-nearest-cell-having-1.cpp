class Solution {
  public:
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        vector<vector<int>>dir={{-1,0},{1,0},{0,-1},{0,1}};
        vector<vector<int>>ans(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    ans[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        while(!q.empty()){
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                for(int j=0;j<4;j++){
                    int newx=x+dir[j][0];
                    int newy=y+dir[j][1];
                    if(newx>=0 && newy>=0 && newx<n && newy<m && ans[newx][newy]==-1){
                        ans[newx][newy]=ans[x][y]+1;
                        q.push({newx,newy});
                    }
                }
        }
        return ans;
    }
};