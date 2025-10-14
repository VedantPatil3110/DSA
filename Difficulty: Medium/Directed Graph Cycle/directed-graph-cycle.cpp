class Solution {
  public:
  bool dfs(int idx,vector<vector<int>>&adj,vector<int>&vis,vector<int>&path){
      vis[idx]=1;
      path[idx]=1;
      for(auto x:adj[idx]){
          if(!vis[x]){
              if(dfs(x,adj,vis,path)){
                  return true;
              }
          }
          else if(path[x]){
              return true;
          }
      }
      path[idx]=0;
      return false;
  }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        vector<vector<int>>adj(V);
        for(auto x:edges){
            adj[x[0]].push_back(x[1]);
        }
        vector<int>vis(V,0);
        vector<int>path(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(dfs(i,adj,vis,path)){
                    return true;
                }
            }
        }
        return false;
    }
};