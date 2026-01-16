// User function Template for C++
class Solution {
  public:
    string smallestNumber(int s, int d) {
        if(s<1 || s>9*d){
            return "-1";
        }
        string f(d,'0');
        s--;
        for(int i=d-1;i>0;i--){
            if(s>9){
                f[i]='9';
                s-=9;
            }
            else{
                f[i]='0'+s;
                s=0;
            }
        }
        f[0]='1'+s;
        return f;
    }
};