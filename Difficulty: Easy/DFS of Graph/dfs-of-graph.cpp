//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  void solve(vector<vector<int>>&adj,vector<int>&visited,vector<int>&ans,int start){
      visited[start]=1;
      ans.push_back(start);
      for(auto ele:adj[start]){
          if(!visited[ele]){
              solve(adj,visited,ans,ele);
          }
      }
  }
    vector<int> dfs(vector<vector<int>>& adj) {
        int n=adj.size();
        vector<int>vis(n,0);
        vector<int>ans;
        int start=0;
        solve(adj,vis,ans,start);
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
        vector<vector<int>> adj(
            V); // Use vector of vectors instead of array of vectors.

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
        vector<int> ans = obj.dfs(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends