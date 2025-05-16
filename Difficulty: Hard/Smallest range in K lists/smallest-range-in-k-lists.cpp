//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> findSmallestRange(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<>>minheap;
        int maxval=INT_MIN;
        int maxel=-1;
        int minel=-1;
        int minrange=INT_MAX;
        for(int i=0;i<n;i++){
            minheap.push({arr[i][0],{i,0}});
            maxval=max(maxval,arr[i][0]);
        }
        while(true){
            auto top=minheap.top();
            minheap.pop();
            int row=top.second.first;
            int col=top.second.second;
            int minval=top.first;
            if(maxval-minval<minrange){
                minrange=maxval-minval;
                minel=minval;
                maxel=maxval;
            }
            if(col+1==m){
                break;
            }
            int nextval=arr[row][col+1];
            minheap.push({nextval,{row,col+1}});
            maxval=max(maxval,nextval);
        }
        return {minel,maxel};
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> arr(k, vector<int>(n));

        for (int i = 0; i < k; i++)
            for (int j = 0; j < n; j++)
                cin >> arr[i][j];

        Solution obj;
        vector<int> range = obj.findSmallestRange(arr);
        cout << range[0] << " " << range[1] << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends