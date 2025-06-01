class Solution {
  public:
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int x) {
        int n=mat1.size();
        int r1=0;
        int c1=0;
        int r2=n-1;
        int c2=n-1;
        int count=0;
        while(r1<n && r2>=0){
            int sum=mat1[r1][c1]+mat2[r2][c2];
            if(sum==x){
                count++;
                c1++;
                c2--;
            }
            else if(sum>x){
                c2--;
            }
            else{
                c1++;
            }
            if(c1==n){
                r1++;
                c1=0;
            }
            if(c2==-1){
                c2=n-1;
                r2--;
            }
        }
        return count;
    }
};