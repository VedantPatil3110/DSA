//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        queue<int>k;
        queue<int>l;
        vector<int>ans;
        int n=q.size();
        int i=0;
        while(i<n/2){
            k.push(q.front());
            q.pop();
            i++;
        }
        i=0;
        while(i<n/2){
            l.push(q.front());
            q.pop();
            i++;
        }
        while(k.size()!=0 && l.size()!=0){
            ans.push_back(k.front());
            k.pop();
            ans.push_back(l.front());
            l.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        queue<int> q;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push(a);
        }
        Solution ob;
        vector<int> ans=ob.rearrangeQueue(q);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    
cout << "~" << "\n";
}
    
    return 0;
}
// } Driver Code Ends