//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    // Function to check if given number n is a power of two.
    bool op(int n){
        if(n==0){
            return true;
        }
        if(n==1){
            return true;
        }
        else if(n%2==0){
            return op(n/2);
        }
        return false;
    }
    bool isPowerofTwo(int n) {
        return op(n);
    }
};


//{ Driver Code Starts.

// Driver code
int main() {

    int t;
    cin >> t; // testcases

    for (int i = 0; i < t; i++) {
        int n; // input a number n
        cin >> n;
        Solution ob;
        if (ob.isPowerofTwo(n))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends