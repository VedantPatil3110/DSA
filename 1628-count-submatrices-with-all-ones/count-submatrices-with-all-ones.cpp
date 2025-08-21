class Solution {
public:
int add(vector<int>&v){
    int pp=0;
    int p=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0){
            p=0;
        }
        else{
            p++;
        }
        pp+=p;
    }
    return pp;
}
    int numSubmat(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int ans=0;
        for(int start=0;start<m;start++){
            vector<int>v(n,1);
            for(int i=start;i<m;i++){
                for(int j=0;j<n;j++){
                    v[j]=v[j] & mat[i][j];
                }
                ans+=add(v);
            }
        }
        return ans;
    }
};