//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    // Function to find the largest number after k swaps.
    void findmax(string& s,int k,string& maxstr,int idx){
        if(k==0){
            return;
        }
        int n=s.size();
        char maxchar=s[idx];
        for(int i=idx+1;i<n;i++){
            if(maxchar<s[i]){
                maxchar=s[i];
            }
        }
        if(maxchar!=s[idx]){
            k--;
        }
        for(int i=idx;i<n;i++){
            if(s[i]==maxchar){
                swap(s[idx],s[i]);
                if(s.compare(maxstr) > 0) {
                    maxstr = s;
                }
                findmax(s,k,maxstr,idx+1);
                swap(s[idx],s[i]);
            }
        }
    }
    string findMaximumNum(string& s, int k) {
        string maxstr=s;
        findmax(s,k,maxstr,0);
        return maxstr;
    }
};


//{ Driver Code Starts.

int main() {
    int t, k;
    string str;

    cin >> t;
    while (t--) {
        cin >> k >> str;
        Solution ob;
        cout << ob.findMaximumNum(str, k) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends