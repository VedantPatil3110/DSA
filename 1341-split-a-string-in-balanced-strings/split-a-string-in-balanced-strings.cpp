class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0;
        int left=0;
        int right=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R'){
                right++;
            }
            else if(s[i]=='L'){
                left++;
            }
            if(right==left){
                count++;
            }
        }
        return count;
    }
};