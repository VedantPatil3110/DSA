//{ Driver Code Starts
// here

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
            unordered_map<int,int>m;
            set<int>s1(arr1.begin(),arr1.end());
            set<int>s2(arr2.begin(),arr2.end());
            set<int>s3(arr3.begin(),arr3.end());
            for(auto num:s1){
                m[num]++;
            }
            for(auto num:s2){
                m[num]++;
            }
            for(auto num:s3){
                m[num]++;
            }
            vector<int>ans;
            for(auto x:m){
                if(x.second==3){
                    ans.push_back(x.first);
                }
            }
            sort(ans.begin(),ans.end());
            return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr, crr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        string input3;
        getline(cin, input3);
        stringstream ss3(input3);
        int number3;
        while (ss3 >> number3) {
            crr.push_back(number3);
        }
        Solution ob;
        vector<int> res = ob.commonElements(arr, brr, crr);
        if (res.size() == 0)
            cout << -1;
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl << "~\n";
    }
}
// } Driver Code Ends