class Solution {
  public:
    int kthSmallest(vector<vector<int>> &matrix, int k) {
        priority_queue<int,vector<int>,greater<int>>q;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                q.push(matrix[i][j]);
            }
        }
        for(int i=1;i<k;i++){
            q.pop();
        }
        return q.top();    
    }
};