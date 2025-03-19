//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n=points.size();
        priority_queue<pair<double,pair<int,int>>>p;
        for(int i=0;i<n;i++){
            double a=sqrt((points[i][0]*points[i][0])+(points[i][1]*points[i][1]));
            p.push({a,{points[i][0],points[i][1]}});
            if(p.size()>k){
                p.pop();
            }
        }
        vector<vector<int>>ans;
        while(!p.empty()){
            ans.push_back({p.top().second.first,p.top().second.second});
            p.pop();
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        int n;
        cin >> n;
        vector<vector<int>> points(n, vector<int>(2));
        for (int i = 0; i < n; i++) {
            cin >> points[i][0] >> points[i][1];
        }
        Solution ob;
        vector<vector<int>> ans = ob.kClosest(points, k);
        sort(ans.begin(), ans.end());
        for (const vector<int>& point : ans) {
            cout << point[0] << " " << point[1] << endl;
        }
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends