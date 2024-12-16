//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int res=arr[n-1]-arr[0];
        for(int i=1;i<n;i++){
            // if(arr[i]-k<0){
            //     continue;
            // }
            int mi=min(arr[0]+k,arr[i]-k);
            int mx=max(arr[n-1]-k,arr[i-1]+k);
            res=min(res,mx-mi);
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;

    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        getline(cin, input);
        int k;
        cin >> k;
        cin.ignore();
        vector<int> arr;
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        int res = ob.getMinDiff(arr, k);
        cout << res;

        cout << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends