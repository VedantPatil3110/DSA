class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int>ans;
        int i=0;
        int j=0;
        while(ans.size() < mat[0].size()*mat.size()){
            ans.push_back(mat[i][j]);
            if((i+j)%2==0){
                if(j==mat[0].size()-1){
                    i++;
                }
                else if(i==0){
                    j++;
                }
                else{
                    i--;
                    j++;
                }
            }
            else{
                if(i==mat.size()-1){
                    j++;
                }
                else if(j==0){
                    i++;
                }
                else{
                    i++;
                    j--;
                }
            }
        }
        return ans;
    }
};