//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    void bfs(vector<vector<int>>&adj,vector<int>&visited,vector<int>&ans,int start){
        queue<int>q;
        q.push(start);
        visited[start]=1;
        while(q.size()>0){
            int temp=q.front();
            q.pop();
            ans.push_back(temp);
            for(auto ele:adj[temp]){
                if(!visited[ele]){
                    q.push(ele);
                    visited[ele]=1;
                }
            }
        }
    }
    vector<int> bfs(vector<vector<int>> &adj) {
        int n=adj.size();
        vector<int>ans;
        vector<int>visited(n,0);
        bfs(adj,visited,ans,0);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        int V;
        cin >> V;
        cin.ignore();
        // Use vector of vectors instead of array of vectors.
        vector<vector<int>> adj(V);

        for (int i = 0; i < V; i++) {
            string input;
            getline(cin, input);
            int num;
            vector<int> node;
            stringstream ss(input);
            while (ss >> num) {
                node.push_back(num);
            }
            adj[i] = node;
        }

        Solution obj;
        vector<int> ans = obj.bfs(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends