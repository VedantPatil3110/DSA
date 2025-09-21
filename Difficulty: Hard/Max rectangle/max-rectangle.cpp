class Solution {
  public:
    int area(vector<int>& h, int n) {
        vector<int> l(n, -1), r(n, n);
        stack<int> s1, s2;
        for (int i = 0; i < n; ++i) {
            while (!s1.empty() && h[s1.top()] >= h[i]) s1.pop();
            if (!s1.empty()) l[i] = s1.top();
            s1.push(i);
        }
        for (int i = n - 1; i >= 0; --i) {
            while (!s2.empty() && h[s2.top()] >= h[i]) s2.pop();
            if (!s2.empty()) r[i] = s2.top();
            s2.push(i);
        }
        int ans = 0;
        for (int i=0; i<n; ++i) ans=max(ans, (r[i]-l[i]-1)*h[i]);
        return ans;
    }
    
    int maxArea(vector<vector<int>> &mat) {
        // code here
        int n = mat.size(), m = mat[0].size(), ans = area(mat[0], m);
        for(int i = 1; i<n; ++i) {
            for(int j = 0; j<m; ++j)
                if(mat[i][j] == 1) mat[i][j] = mat[i-1][j] + 1;
                else mat[i][j] = 0;
            ans = max(ans, area(mat[i], m));
        }
        return ans;
    }
};