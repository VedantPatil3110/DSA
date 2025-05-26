//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


// } Driver Code Ends

class Solution {
  public:
  int solve(int i,vector<int>&arr,vector<int>&dp){
      if(i>=arr.size()){
          return 0;
      }
      if(dp[i]!=-1){
          return dp[i];
      }
      int take=arr[i]+solve(i+2,arr,dp);
      int nottake=solve(i+1,arr,dp);
      return dp[i]=max(take,nottake);
  }
    int findMaxSum(vector<int>& arr) {
        int n=arr.size();
        if(n==0){
            return 0;
        }
        if(n==1){
            return arr[0];
        }
        vector<int>dp(n+1,-1);
        return solve(0,arr,dp);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.findMaxSum(arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends