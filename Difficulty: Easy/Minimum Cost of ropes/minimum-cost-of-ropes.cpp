//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    int minCost(vector<int>& arr) {
        int n=arr.size();
        priority_queue<int,vector<int>,greater<int>>p;
        for(int i=0;i<n;i++){
            p.push(arr[i]);
        }
        int cost=0;
        while(p.size()>1){
            int k=0;
            int sum=0;
            sum+=p.top();
            p.pop();
            sum+=p.top();
            p.pop();
            cost+=sum;
            p.push(sum);
        }
        return cost;
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
        vector<int> a;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(a) << endl;
        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends