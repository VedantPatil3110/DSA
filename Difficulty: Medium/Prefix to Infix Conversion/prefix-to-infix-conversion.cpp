//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
  bool is(char x){
      if(x=='+' || x=='-' || x=='/' || x=='*' || x=='%'||x=='^'){
          return true;
      }
      else{
          return false;
      }
  }
    string preToInfix(string pre) {
        int n=pre.size();
        stack<string>st;
        for(int i=n-1;i>=0;i--){
            if(is(pre[i])){
                string a=st.top();
                st.pop();
                string b=st.top();
                st.pop();
                string temp="("+a+pre[i]+b+")";
                st.push(temp);
            }
            else{
                st.push(string(1,pre[i]));
            }
        }
        return st.top();
    }
};


//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToInfix(prefix) << endl;

        // cout << "~\n";
    
cout << "~" << "\n";
}
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends