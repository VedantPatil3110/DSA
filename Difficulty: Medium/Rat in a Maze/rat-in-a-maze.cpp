class Solution {
  public:
  void solve(int i,int j,int n,int m,vector<vector<int>>&maze,vector<string>&ans,string temp,vector<vector<bool>>&visit){
      if(i<0 || j<0 || i>n || j>m || visit[i][j] || maze[i][j]==0){
          return;
      }
      if(i==n&&j==m){
          ans.push_back(temp);
          return;
      }
      visit[i][j]=true;
      temp.push_back('D');
      solve(i+1,j,n,m,maze,ans,temp,visit);
      temp.pop_back();
      temp.push_back('R');
      solve(i,j+1,n,m,maze,ans,temp,visit);
      temp.pop_back();
      temp.push_back('L');
      solve(i,j-1,n,m,maze,ans,temp,visit);
      temp.pop_back();
      temp.push_back('U');
      solve(i-1,j,n,m,maze,ans,temp,visit);
      temp.pop_back();
      visit[i][j]=false;
  }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        int n=maze.size()-1;
        int m=maze[0].size()-1;
        vector<string>ans;
        string temp="";
        if(maze[0][0]==0){
            return {};
        }
        vector<vector<bool>>visit(n+1,vector<bool>(m+1,false));
        solve(0,0,n,m,maze,ans,temp,visit);
        sort(ans.begin(),ans.end());
        return ans;
    }
};