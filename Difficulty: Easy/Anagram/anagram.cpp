//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        // Your code here
        if(s1.size()!=s2.size()){
            return false;
        }
        map<char,int>m;
        for(int i=0;i<s1.size();i++){
            m[s1[i]]++;
        }
        for(int i=0;i<s2.size();i++){
            if(m.find(s2[i])==m.end()){
                return false;
            }
            else{
                m[s2[i]]--;
                if(m[s2[i]]==0){
                    m.erase(s2[i]);
                }
            }
        }
        return true;
    }
};


//{ Driver Code Starts.

int main() {

    int t;

    cin >> t;

    while (t--) {
        string c, d;

        cin >> c >> d;
        Solution obj;
        if (obj.areAnagrams(c, d))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends