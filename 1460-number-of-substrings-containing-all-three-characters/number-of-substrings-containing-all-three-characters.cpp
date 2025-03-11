class Solution {
public:
    int numberOfSubstrings(string s) {
        int res=0;
        int l=0;
        int r=0;
        int n=s.size();
        map<int,int>m;
        while(r<n){
            m[s[r]]++;
            while(m.size()==3){
                res+=n-r;
                m[s[l]]--;
                if(m[s[l]]==0){
                    m.erase(s[l]);
                }
                l++;
            }
            r++;
        }
        return res;
    }
};