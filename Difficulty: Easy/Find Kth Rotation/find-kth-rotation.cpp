//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        vector<int>a;
        int n=arr.size();
        for(int i=0;i<n;i++){
            a.push_back(arr[i]);
        }
        sort(a.begin(),a.end());
        int t=a[0];
        int k=0;
        for(int i=0;i<n;i++){
            if(t==arr[i]){
                k=i;
                break;
            }
        }
        return k-0;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        Solution ob;
        int res = ob.findKRotation(arr);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends