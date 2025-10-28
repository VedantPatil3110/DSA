// User function Template for C++

class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        queue<pair<int,pair<int,int>>>q;
        if(A[0][0]==0){
            return -1;
        }
        vector<vector<int>>dir{{-1,0},{1,0},{0,-1},{0,1}};
        q.push({0,{0,0}});
        vector<vector<bool>>vis(N,vector<bool>(M,false));
        vis[0][0]=true;
        while(!q.empty()){
            int step=q.front().first;
            int i=q.front().second.first;
            int j=q.front().second.second;
            q.pop();
            if(i==X && j==Y){
                return step;
            }
            for(int k=0;k<4;k++){
                int newi=i+dir[k][0];
                int newj=j+dir[k][1];
                if(newi>=0 && newj>=0 && newi<N && newj<M && vis[newi][newj]==false && A[newi][newj]==1){
                    q.push({step+1,{newi,newj}});
                    vis[newi][newj]=true;
                }
            }
        }
        return -1;
    }
};