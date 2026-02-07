class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int count1=0;
        int ans=0;
        for(auto x:s){
            if(x=='1'){
                count1++;
            }
            else{
                ans=min(ans+1,count1);
            }
        }
        return ans;
    }
};