class Solution {
public:
vector<vector<bool>>flag;
void freaky(int i,int j,int m,int n,vector<vector<int>>&matrix){
    flag[i][j]=false;
    for(int k=0;k<m;k++){
        if(matrix[k][j]!=0 && flag[k][j]==true){
            flag[k][j]=false;
        }
        matrix[k][j]=0;
    }
    for(int k=0;k<n;k++){
        if(matrix[i][k]!=0 && flag[i][k]==true){
            flag[i][k]=false;
        }
        matrix[i][k]=0;
    }
}
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        flag.resize(m,vector<bool>(n,true));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0 && flag[i][j]==true){
                    freaky(i,j,m,n,matrix);
                }
            }
        }
    }
};