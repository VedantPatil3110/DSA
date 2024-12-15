//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    long long seriesSum(int n) {
        if(n==1){
            return 1;
        }
        return (long)n*(n+1)/2;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        long long res = obj.seriesSum(n);

        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends