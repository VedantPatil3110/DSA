//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        int i=0;
        int j=a.size()-1;
        while(i<j){
            int mid=i+(j-i)/2;
            if(a[mid]>a[mid+1]){
                j=mid;
            }
            else{
                i=mid+1;
            }
        }
        return a[i];
    }
};




//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	vector<int>a(n);
    	for(int i = 0; i < n; i++)
    		cin>>a[i];
    	Solution ob;
    	int ans = ob.findPeakElement(a);
    	cout << ans << "\n";
    
cout << "~" << "\n";
}
	return 0;
}


// } Driver Code Ends