//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        vector<int>ans;
        int n=arr.size();
        // for(int i=0;i<n-k+1;i++){
        //     queue<int>q;
        //     int j=i;
        //     while(j<i+k){
        //         while(q.size()>0&&q.front()<arr[j]){
        //             q.pop();
        //         }
        //         q.push(arr[j]);
        //         j++;
        //     }
        //     ans.push_back(q.front());
        // }
        deque<int>q;
        for(int i=0;i<n;i++){
            if(!q.empty()&&q.front()==i-k){
                q.pop_front();
            }
            while(q.size()>0&&arr[q.back()]<arr[i]){
                q.pop_back();
            }
            q.push_back(i);
            if(i>=k-1){
                ans.push_back(arr[q.front()]);
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution obj;
        vector<int> res = obj.maxOfSubarrays(arr, k);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends