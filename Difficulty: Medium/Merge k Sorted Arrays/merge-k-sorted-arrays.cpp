//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    // Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K) {
        priority_queue<int,vector<int>,greater<int>>pq;
       for(int i=0;i<arr.size();i++){
           for(int j=0;j<K;j++){
               pq.push(arr[i][j]);
           }
       }
       vector<int>ans(K*K);
       for(int i=0;i<K*K;i++){
           ans[i]=(pq.top());
           pq.pop();
       }
       return ans;
    }
};


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(k, vector<int> (k, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    
cout << "~" << "\n";
}
	return 0;
}






// } Driver Code Ends