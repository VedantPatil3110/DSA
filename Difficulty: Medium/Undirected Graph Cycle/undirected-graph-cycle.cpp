class Solution {
  public:
  bool solve(vector<vector<int>>&adj,vector<int>&vis,int i,int parent){
      vis[i]=1;
      for(auto x:adj[i]){
          if(!vis[x]){
              if(solve(adj,vis,x,i)){
                  return true;
              }
          }
          else if(x!=parent){
              return true;
          }
      }
      return false;
  }
    bool isCycle(int V, vector<vector<int>>& edges) {
        vector<vector<int>>adj(V);
        for(auto x:edges){
            int u=x[0];
            int v=x[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(solve(adj,vis,i,-1)){
                    return true;
                }
            }
        }
        return false;
    }
};