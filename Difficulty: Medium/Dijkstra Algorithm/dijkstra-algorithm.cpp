class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        vector<vector<pair<int,int>>>adj(V);
        for(auto x:edges){
            int u=x[0];
            int v=x[1];
            int w=x[2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>dist(V,INT_MAX);
        dist[src]=0;
        pq.emplace(0,src);
        while(!pq.empty()){
            auto top=pq.top();
            pq.pop();
            int d=top.first;
            int u=top.second;
            if(d>dist[u]){
                continue;
            }
            for(auto p:adj[u]){
                int v=p.first;
                int w=p.second;
                if(dist[u]+w<dist[v]){
                    dist[v]=dist[u]+w;
                    pq.emplace(dist[v],v);
                }
            }
        }
        return dist;
    }
};