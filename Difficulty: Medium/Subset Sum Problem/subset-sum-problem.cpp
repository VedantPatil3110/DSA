//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  bool solve(int i,int sum,vector<int>&arr,vector<vector<int>>&dp){
      if(sum==0){
          return true;
      }
      if(i>=arr.size() && sum>0){
          return false;
      }
      if(dp[i][sum]!=-1){
          return dp[i][sum];
      }
      bool take=false;
      if(sum>=arr[i]){
          take=solve(i+1,sum-arr[i],arr,dp);
      }
      bool nottake=solve(i+1,sum,arr,dp);
      return dp[i][sum]=(take | nottake);
  }
    bool isSubsetSum(vector<int>& arr, int sum) {
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        return solve(0,sum,arr,dp);
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
        int sum;
        cin >> sum;
        cin.ignore();

        Solution ob;
        if (ob.isSubsetSum(arr, sum))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends