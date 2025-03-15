//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int firstIndex(vector<int> &arr) {
        int idx=-1;
        int i=0;
        int j=arr.size()-1;
        if(arr[0]==1){
            return 0;
        }
        while(i<=j){
            int mid=i+(j-i)/2;
            if(arr[mid]==1&&arr[mid-1]==0){
                idx=mid;
                break;
            }
            else if(arr[mid]==0){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return idx;
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
        stringstream s1(input);
        int num;
        while (s1 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        cout << ob.firstIndex(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends