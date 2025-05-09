//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxPerimeter(vector<int> &arr) {
        sort(arr.begin(),arr.end());
        for(int i=arr.size()-1;i>=2;i--){
            if(arr[i-1]+arr[i-2]>arr[i]){
                return arr[i-1]+arr[i-2]+arr[i];
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.

// Driver Program
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        cout << ob.maxPerimeter(arr) << endl;
        cout << "~\n";
    }
}

// } Driver Code Ends