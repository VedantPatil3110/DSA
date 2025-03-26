class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>v;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                v.push_back(grid[i][j]);
            }
        }
        sort(v.begin(),v.end());
        int median=v[v.size()/2];
        int count=0;
        for(int i=0;i<v.size();i++){
            int dif=abs(median-v[i]);
            if((dif%x)==0){
                count+=dif/x;
            }
            else{
                return -1;
            }
        }
        return count;
    }
};