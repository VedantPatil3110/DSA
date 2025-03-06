class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>helper(n*n,0);
        int count=0;
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                helper[count]=grid[i][j];
                count++;
            }
        }
        vector<int>ans(2,0);
        unordered_set<int>wtf;
        for(auto x:helper){
            if(wtf.find(x)!=wtf.end()){
                ans[0]=x;
                break;
            }
            wtf.insert(x);
        }
        unordered_set<int>s(helper.begin(),helper.end());
        for(int i=1;i<helper.size()+1;i++){
            if(s.find(i)==s.end()){
                ans[1]=i;
            }
        }
        return ans;
    }
};