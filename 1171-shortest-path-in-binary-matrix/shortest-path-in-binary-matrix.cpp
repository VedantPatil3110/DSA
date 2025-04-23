class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        if(grid[0][0]==1||grid[n-1][n-1]==1){
            return -1;
        }
        vector<vector<int>>directions={{-1,0},{1,0},{0,-1},{0,1},{-1,-1},{1,1},{-1,1},{1,-1}};
        queue<pair<int,int>>q;
        q.push({0,0});
        grid[0][0]=1;
        while(!q.empty()){
            auto temp=q.front();
            q.pop();
            int i=temp.first;
            int j=temp.second;
            int dist=grid[i][j];
            if(i==n-1&&j==n-1){
                return dist;
            }
            for(auto dir:directions){
                int x=i+dir[0];
                int y=j+dir[1];
                if(x>=0&&y>=0&&x<n&&y<n&&grid[x][y]==0){
                    q.push({x,y});
                    grid[x][y]=dist+1;
                }
            }
        }
        return -1;
    }
};