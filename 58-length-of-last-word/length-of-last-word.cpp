class Solution {
public:
    int lengthOfLastWord(string s) {
        int idx=-1;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' '){
                continue;
            }
            else{
                idx=i;
                break;
            }
        }
        int ans=0;
        for(int i=idx;i>=0;i--){
            if(s[i]==' '){
                break;
            }
            ans++;
        }
        if(idx==-1){
            return -1;
        }
        return ans;
    }
};