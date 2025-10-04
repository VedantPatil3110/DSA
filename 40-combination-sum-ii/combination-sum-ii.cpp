class Solution {
public:
void solve(int idx,vector<int>&can,int target,vector<vector<int>>&ans,vector<int>&temp){
    if(target==0){
        ans.push_back(temp);
        return;
    }
    for(int i=idx;i<can.size();i++){
        if(can[i]>target){
            break;
        }
        if (i > idx && can[i] == can[i - 1]) continue;
        temp.push_back(can[i]);
        solve(i+1,can,target-can[i],ans,temp);
        temp.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>>ans;
        vector<int>temp;
        solve(0,candidates,target,ans,temp);
        return ans;
    }
};