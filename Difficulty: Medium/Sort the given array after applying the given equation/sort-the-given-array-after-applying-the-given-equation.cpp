//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int solve(int a,int b,int c,int x){
      int ans=(a*x*x)+(b*x)+c;
      return ans;
  }
    vector<int> sortArray(vector<int> &arr, int A, int B, int C) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            arr[i]=solve(A,B,C,arr[i]);
        }
        sort(arr.begin(),arr.end());
        return arr;
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

        int a, b, c;
        cin >> a >> b >> c;
        cin.ignore();

        Solution obj;
        vector<int> ans = obj.sortArray(arr, a, b, c);
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << ' ';
        cout << endl;

        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends