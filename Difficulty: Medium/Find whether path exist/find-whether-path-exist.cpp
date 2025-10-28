
class Solution {
  public:
    // Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) {
        int stx=-1;
        int sty=-1;
        int dex=-1;
        int dey=-1;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    stx=i;
                    sty=j;
                }
                if(grid[i][j]==2){
                    dex=i;
                    dey=j;
                }
            }
        }
        if(stx==-1 || sty==-1 || dex==-1 || dey==-1){
            return false;
        }
        queue<pair<int,int>>q;
        vector<vector<bool>>vis(grid.size(),vector<bool>(grid[0].size(),false));
        vector<vector<int>>dir{{-1,0},{1,0},{0,-1},{0,1}};
        q.push({stx,sty});
        vis[stx][sty]=true;
        while(!q.empty()){
            int a=q.front().first;
            int b=q.front().second;
            q.pop();
            if(a==dex && b==dey){
                return true;
            }
            for(int i=0;i<4;i++){
                int newa=a+dir[i][0];
                int newb=b+dir[i][1];
                if(newa>=0 && newb>=0 && newa<grid.size() && newb<grid[0].size() && vis[newa][newb]==false && grid[newa][newb]!=0){
                    q.push({newa,newb});
                    vis[newa][newb]=true;
                }
            }
        }
        return false;
    }
};