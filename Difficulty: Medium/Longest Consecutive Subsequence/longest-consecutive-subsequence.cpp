//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        int n=arr.size();
        set<int>s;
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            s.insert(arr[i]);
            maxi=max(maxi,arr[i]);
            mini=min(mini,arr[i]);
        }
        int count=0;
        int maxcount=-1;
        for(int i=mini;i<=maxi;i++){
            if(s.find(i)!=s.end()){
                count++;
                maxcount=max(maxcount,count);
            }
            else{
                count=0;
            }
        }
        return maxcount;
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.longestConsecutive(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends