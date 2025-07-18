// User function Template for C++

class Solution {
  public:
    string findLargest(int n, int s) {
        if (s == 0) {
        return (n == 1) ? "0" : "-1";
        }
        if (s > 9 * n) return "-1";
        string ans="";
        for(int i=0;i<n;i++){
            int d=min(9,s);
            ans+=char(d+'0');
            s-=d;
        }
        return ans;
    }
};