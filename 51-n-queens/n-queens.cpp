class Solution {
public:
vector<vector<string>>ans;
bool check(vector<string>&grid,int r,int c,int n){
    for(int i=0;i<n;i++){
        if(grid[i][c]=='Q'){
            return false;
        }
    }
    for(int i=r-1,j=c-1;i>=0 && j>=0;i--,j--){
        if(grid[i][j]=='Q'){
            return false;
        }
    }
    for(int i=r-1,j=c+1;i>=0 && j<n;i--,j++){
        if(grid[i][j]=='Q'){
            return false;
        }
    }
    return true;

}
void f(vector<string>&grid,int n,int r){
    if(r==n){
        ans.push_back(grid);
        return;
    }
    for(int i=0;i<n;i++){
        if(check(grid,r,i,n)){
            grid[r][i]='Q';
            f(grid,n,r+1);
            grid[r][i]='.';
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<string>grid(n,string(n,'.'));
        f(grid,n,0);
        return ans;
    }
};