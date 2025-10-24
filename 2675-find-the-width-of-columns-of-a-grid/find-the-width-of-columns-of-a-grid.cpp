class Solution {
public:
int solve(int x){
    string s=to_string(x);
    return s.size();
}
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        vector<int>ans;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<m;i++){
            int maxi=0;
            for(int j=0;j<n;j++){
                maxi=max(maxi,solve(grid[j][i]));
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};