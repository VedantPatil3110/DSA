class Solution {
public:
vector<int>dp;
int help(int n){
    if(n==1 || n==2){
        return n;
    }
    if(dp[n] !=-1){
        return dp[n];
    }
    return dp[n]=help(n-1)+help(n-2);
}
    int climbStairs(int n) {
        // if(n==0||n==1){
        //     return 1;
        // }
        // else{
        //     return climbStairs(n-1)+climbStairs(n-2);
        // }
        dp.clear();
        dp.resize(n+1,-1);
        return help(n);
    }
};