//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    long long int maximizeSum(long long int a[], int n, int k)
    {
        long long sum=0;
        priority_queue<int,vector<int>,greater<int>>p;
        for(int i=0;i<n;i++){
            p.push(a[i]);
        }
        for(int i=0;i<k;i++){
            int x=-(p.top());
            if(x==0){
                break;
            }
            p.pop();
            p.push(x);
        }
        while(!p.empty()){
            sum+=p.top();
            p.pop();
        }
        return sum;
    }
};


//{ Driver Code Starts.
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n, k;
         cin>>n>>k;
         long long int a[n+5];
         for(int i=0;i<n;i++)
         cin>>a[i];
         Solution ob;
         cout<<ob.maximizeSum(a, n, k)<<endl;
     
cout << "~" << "\n";
}
	
	return 0;
}
// } Driver Code Ends