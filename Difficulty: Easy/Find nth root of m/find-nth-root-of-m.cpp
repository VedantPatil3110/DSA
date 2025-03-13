//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int nthRoot(int n, int m) {
        int l=1;
        int h=m;
        if(m==1||n==1){
            return m;
        }
        while(l<=h){
            int mid=(l+h)/2;
            if(pow(mid,n)==m){
                return mid;
            }
            else if(pow(mid,n)<m){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return -1;
    }    
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        Solution ob;
        int ans = ob.nthRoot(n, m);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends