//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to check if b is a subset of a
    bool bst(vector<int>&a,int k){
        int i=0;
        int j=a.size()-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(a[mid]==k){
                a.erase(a.begin()+mid);
                return true;
            }
            else if(a[mid]<k){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return false;
    }
    bool isSubset(vector<int> &a, vector<int> &b) {
        sort(a.begin(),a.end());
        for(int i=0;i<b.size();i++){
            if(bst(a,b[i])==false){
                return false;
            }
        }
        return true;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a1, a2;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a1.push_back(number);
        }
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            a2.push_back(number);
        }
        Solution s;
        bool ans = s.isSubset(a1, a2);
        if (ans) {
            cout << "true"
                 << "\n";
        } else {
            cout << "false"
                 << "\n";
        }
        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends