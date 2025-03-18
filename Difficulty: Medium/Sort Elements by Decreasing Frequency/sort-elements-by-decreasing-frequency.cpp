//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        unordered_map<int,int>m;
        for(auto x:arr){
            m[x]++;
        }
        priority_queue<pair<int,int>>p;
        for(auto x:m){
            p.push({x.second,-x.first});
        }
        vector<int>ans;
        while(!p.empty()){
            int s=p.top().first;
            int o=p.top().second;
            p.pop();
            for(int i=0;i<s;i++){
                ans.push_back(-o);
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
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends