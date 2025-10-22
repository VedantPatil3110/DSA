class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        int n=mat.size();
        for(int i=0;i<n;i++){
            bool flag1=false;
            bool flag2=true;
            for(int j=0;j<n;j++){
                if(i==j){
                    continue;
                }
                if(mat[i][j]==1){
                    flag1=true;
                }
                if(mat[j][i]==0){
                    flag2=false;
                }
            }
            if(!flag1 && flag2){
                return i;
            }
        }
        return -1;
    }
};