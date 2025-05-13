//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int nCr(int n, int r) {
        if(n<r){
            return 0;
        }
        if(n==r){
            return 1;
        }
        long long ans=1;
        for(int i=1;i<=r;i++){
            ans*=(n-r+i);
            ans/=i;
        }
        return int(ans);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, r;
        cin >> n >> r;

        Solution ob;
        cout << ob.nCr(n, r) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends