class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        set<int>row;
        set<int>col;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for(auto x:row){
            int i=0;
            while(i<m){
                matrix[x][i]=0;
                i++;
            }
        }
        for(auto x:col){
            int i=0;
            while(i<n){
                matrix[i][x]=0;
                i++;
            }
        }
    }
};