//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

//User function Template for C++
class Solution{   
public:
    string isValid(long long N){
        string ans="";
        if(N%5==0){
            ans+="YES";
        } 
        else{
            ans+="NO";
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.isValid(N) << endl;
    
cout << "~" << "\n";
}
    return 0; 
} 
// } Driver Code Ends