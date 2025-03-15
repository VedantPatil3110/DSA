//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int findClosest(vector<int>& arr, int k) {
        // Complete the function
        int l=0;
        int h=arr.size()-1;
        int c=arr[0];
        while(l<=h){
            int mid=l+(h-l)/2;
            if(abs(arr[mid]-k)<abs(c-k)||abs(arr[mid]-k)==abs(c-k)  &&arr[mid]>c){
                c=arr[mid];
            }
            if(arr[mid]<k){
                l=mid+1;
            }
            else if(arr[mid]>k){
                h=mid-1;
            }
            else{
                return arr[mid];
            }
        }
        return c;
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.findClosest(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends