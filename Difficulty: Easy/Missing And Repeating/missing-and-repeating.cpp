//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        vector<int>ans;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                ans.push_back(arr[i]);
                break;
            }
        }
        unordered_set<int>s(arr.begin(),arr.end());
        for(int i=1;i<n+1;i++){
            if(s.find(i)==s.end()){
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends