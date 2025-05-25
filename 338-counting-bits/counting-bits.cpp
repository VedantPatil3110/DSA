class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>dp(n+1,0);
        int reset=1;
        for(int i=1;i<=n;i++){
            if(reset*2==i){
                reset=i;
            }
            dp[i]=dp[i-reset]+1;
        }
        return dp;
    }
};