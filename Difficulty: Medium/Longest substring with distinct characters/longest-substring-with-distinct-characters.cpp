class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        int i,j;
        i=0;
        j=0;
        set<char>st;
        int ans=1;
        while(j<s.size()){
            while(st.count(s[j])){
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
            j++;
            ans=max(ans,j-i);
        }
        return ans;
    }
};
