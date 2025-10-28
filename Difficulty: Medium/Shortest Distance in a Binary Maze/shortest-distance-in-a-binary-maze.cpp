// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        vector<vector<bool>>vis(grid.size(),vector<bool>(grid[0].size(),false));
        queue<pair<int,pair<int,int>>>q;
        vector<vector<int>>dir={{-1,0},{1,0},{0,-1},{0,1}};
        q.push({0,{source.first,source.second}});
        vis[source.first][source.second]=true;
        while(!q.empty()){
            int step=q.front().first;
            int x=q.front().second.first;
            int y=q.front().second.second;
            q.pop();
            if(x==destination.first && y==destination.second){
                return step;
            }
            for(int i=0;i<4;i++){
                int newx=x+dir[i][0];
                int newy=y+dir[i][1];
                if(newx>=0 && newy>=0 && newx<grid.size() && newy<grid[0].size() && vis[newx][newy]==false && grid[newx][newy]!=0){
                    q.push({step+1,{newx,newy}});
                    vis[newx][newy]=true;
                }
            }
        }
        return -1;
    }
};
