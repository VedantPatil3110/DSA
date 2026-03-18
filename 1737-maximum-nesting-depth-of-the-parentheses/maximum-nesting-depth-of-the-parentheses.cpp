class Solution {
public:
    int maxDepth(string s) {
        int lr=0;
        int rr=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                lr++;
            }
            if(s[i]==')'){
                rr++;
            }
            int temp=lr-rr;
            ans=max(ans,temp);
        }
        return ans;
    }
};