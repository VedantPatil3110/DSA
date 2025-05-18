//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        int n=mat.size();
        int m=mat[0].size();
        int minr=0;
        int maxr=n-1;
        int minc=0;
        int maxc=m-1;
        int count=0;
        vector<int>ans;
        while(minr<=maxr && minc<=maxc){
            for(int i=minc;i<=maxc && count<n*m;i++){
                ans.push_back(mat[minr][i]);
                count++;
            }
            minr++;
            for(int j=minr;j<=maxr && count<n*m;j++){
               ans.push_back(mat[j][maxc]);
               count++;
          }
             maxc--;
          for(int k=maxc;k>=minc && count<n*m;k--){
              ans.push_back(mat[maxr][k]);
              count++;
          }
          maxr--;
          for(int l=maxr;l>=minr && count<n*m;l--){
               ans.push_back(mat[l][minc]);
               count++;
          }
          minc++;
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r);

        for (int i = 0; i < r; i++) {
            matrix[i].assign(c, 0);
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends