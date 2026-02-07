class Solution {
public:
    int minimumDeletions(string s) {
        int ans=0;
        int bcount=0;
        for(auto x:s){
            if(x=='b'){
                bcount++;
            }
            else{
                ans=min(bcount,ans+1);
            }
        }
        return ans;
    }
};