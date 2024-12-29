//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int myAtoi(char *s) {
        string k="";
        k=k+s;
        string st;
        int count=0;
        while(k[count]==NULL){
            count++;
        }
        if(int(k[count])==45|| int(k[count])==43){
            st.push_back(s[count]);
            count++;
        }
        for(int i=count;i<k.size();i++){
            if(k[i]>=48&&k[i]<=57){
                st.push_back(k[i]);
            }
            else{
                break;
            }
        }
        if (st.empty() || (st.size() == 1 && (st[0] == '-' || st[0] == '+'))) {
            return 0; 
        }
        bool isn=(st[0]=='-');
        bool isp=(st[0]=='+');
        long long num=0;
        int c=0;
        if(isn||isp){
            c++;
        }
        if(isn){for(int i=c;i<st.size();i++){
            num = num * 10 + (st[i] - '0');
            if(num>INT_MAX){
                break;
            }
        }
            num=num*-1;
        }
        else{for(int i=c;i<st.size();i++){
            num = num * 10 + (st[i] - '0');
            if(num>INT_MAX){
                break;
            }
        }}
        if(num>INT_MAX){
            return INT_MAX;
        }
        if (num < INT_MIN) return INT_MIN;
        return num;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[20];
        cin >> s;
        Solution ob;
        int ans = ob.myAtoi(s);
        cout << ans << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends