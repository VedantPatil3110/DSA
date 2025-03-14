//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    void s(stack<int>&st,int n){
        int x=n;
        while(x!=0){
            int a=x%10;
            if(a!=0){
                st.push(a);
            }
            x/=10;
        }
    }
    int evenlyDivides(int n) {
        stack<int>st;
        s(st,n);
        int count=0;
        while(st.size()>0){
            if(n%st.top()==0){
                count++;
            }
            st.pop();
        }
        return count;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends