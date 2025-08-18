class Solution {
public:
int help(vector<vector<int>>&dp,int idx,vector<int>& satisfaction,int time){
    if(idx>=satisfaction.size()){
        return 0;
    }
    if(dp[idx][time]!=-1){
        return dp[idx][time];
    }
    int take=satisfaction[idx]*time+help(dp,idx+1,satisfaction,time+1);
    int nottake=help(dp,idx+1,satisfaction,time);
    return dp[idx][time]=max(take,nottake);
}
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int n=satisfaction.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return help(dp,0,satisfaction,1);
    }
};