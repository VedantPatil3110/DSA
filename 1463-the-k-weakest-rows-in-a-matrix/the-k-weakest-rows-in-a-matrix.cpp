class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
        for(int i=i;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            p.push({count,i});
        }
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(p.top().second);
            p.pop();
        }
        return ans;
    }
};