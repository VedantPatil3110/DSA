//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int inSequence(int a, int b, int c) {
        if(c==0){
            return a==b;
        }
        if((b-a)%c==0 && (b-a)/c>=0){
            return true;
        }
        return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B, C;
        cin >> A >> B >> C;

        Solution ob;
        int ans = ob.inSequence(A, B, C);
        if (ans)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends