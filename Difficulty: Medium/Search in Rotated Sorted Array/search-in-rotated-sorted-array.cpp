//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int search(vector<int>& arr, int key) {
        // Code Here
        int i=0;
        int j=arr.size()-1;
        if(arr[i]==key){
            return i;
        }
        if(arr[j]==key){
            return j;
        }
        while(i<=j){
            int mid=i+(j-i)/2;
            if(arr[mid]==key){
                return mid;
            }
            if(arr[i]==key){
                return i;
            }
            if(arr[j]==key){
                return j;
            }
            if(arr[mid]>arr[i]){
                i++;
            }
            else{
                j--;
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(arr, key) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends