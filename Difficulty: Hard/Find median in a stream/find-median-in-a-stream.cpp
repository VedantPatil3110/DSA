//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<double> getMedian(vector<int> &arr) {
        priority_queue<int>left;
        priority_queue<int,vector<int>,greater<int>>right;
        int n=arr.size();
        vector<double>ans;
        for(int i=0;i<n;i++){
            if(left.size()==0||left.top()>arr[i]){
                left.push(arr[i]);
            }
            else{
                right.push(arr[i]);
            }
            if(left.size()>right.size()+1){
                right.push(left.top());
                left.pop();
            }
            if(right.size()>left.size()+1){
                left.push(right.top());
                right.pop();
            }
            if(left.size()==right.size()){
                ans.push_back((left.top()+right.top())/2.0);
            }
            else{
                if(left.size()>right.size()){
                    ans.push_back(left.top());
                }
                else{
                    ans.push_back(right.top());
                }
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

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<double> ans = ob.getMedian(nums);
        cout << fixed << setprecision(1);
        for (auto &i : ans)
            cout << i << " ";
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends