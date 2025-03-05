class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0){
            return 0;
        }
        unordered_set<char>st;
        int left=0;
        int mcount=INT_MIN;
        for(int i=0;i<s.size();i++){
            while(st.find(s[i])!=st.end()){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[i]);
            mcount=max(mcount,i-left+1);
        }
        return mcount;
    }
};