//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
  void dfs(int i,vector<int>&v,unordered_set<int>&s,vector<vector<int>>& edges){
      s.insert(i);
      v.push_back(i);
      for(auto neighbor:edges[i]){
          if(s.find(neighbor)==s.end()){
              dfs(neighbor,v,s,edges);
          }
      }
  }
    vector<vector<int>> getComponents(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);
      for(auto& edge : edges) {
          int u = edge[0], v = edge[1];
          adj[u].push_back(v);
          adj[v].push_back(u);  // Because the graph is undirected
      }
        vector<vector<int>>ans;
        unordered_set<int>s;
        for(int i=0;i<V;i++){
            vector<int>v;
            if(s.find(i)==s.end()){
                dfs(i,v,s,adj);
                ans.push_back(v);
            }
        }
        return ans;
    }
};



//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        int V, E;
        cin >> V >> E;
        cin.ignore();
        vector<vector<int>> edges;
        for (int i = 1; i <= E; i++) {
            int u, v;
            cin >> u >> v;
            edges.push_back({u, v});
        }

        Solution obj;
        vector<vector<int>> res = obj.getComponents(V, edges);

        for (int i = 0; i < res.size(); i++) {
            sort(res[i].begin(), res[i].end());
        }
        sort(res.begin(), res.end());
        for (const auto &component : res) {
            for (int node : component) {
                cout << node << " ";
            }
            cout << endl;
        }
        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends