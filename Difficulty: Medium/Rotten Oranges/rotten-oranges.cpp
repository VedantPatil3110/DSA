class Solution {
  public:
    int orangesRotting(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int count=0;
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==2){
                    q.push({i,j});
                }
                if(mat[i][j]==1){
                    count++;
                }
            }
        }
        if(count==0){
            return 0;
        }
        int ans=-1;
        vector<vector<int>>dirr={{1,0},{-1,0},{0,1},{0,-1}};
        while(!q.empty()){
            int size=q.size();
            ans++;
            while(size--){
                auto curr=q.front();
                int i=curr.first;
                int j=curr.second;
                q.pop();
                for(int d=0;d<4;d++){
                    int newr=i+dirr[d][0];
                    int newc=j+dirr[d][1];
                    if(newr<0 || newc<0 || newr>=n || newc>=m){
                        continue;
                    }
                    if(mat[newr][newc]==1){
                        mat[newr][newc]=2;
                        q.push({newr,newc});
                        count--;
                    }
                }
            }
        }
        if(count==0){
            return ans;
        }
        return -1;
    }
};