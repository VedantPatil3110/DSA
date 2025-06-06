class Solution {
  public:
    vector<int> search(string &pat, string &txt) {
        const int d = 256; 
        const int q = 101;        
        int m = pat.size();
        int n = txt.size();
        vector<int> result;
        if (m > n) return result;
        int h = 1;
        for (int i = 0; i < m - 1; i++)
            h = (h * d) % q;
        int p = 0;
        int t = 0; 
        for (int i = 0; i < m; i++) {
            p = (d * p + pat[i]) % q;
            t = (d * t + txt[i]) % q;
        }
        for (int i = 0; i <= n - m; i++) {
            if (p == t) {
                bool match = true;
                for (int j = 0; j < m; j++) {
                    if (txt[i + j] != pat[j]) {
                        match = false;
                        break;
                    }
                }
                if (match)
                    result.push_back(i + 1);
            }
            if (i < n - m) {
                t = (d * (t - txt[i] * h) + txt[i + m]) % q;
                if (t < 0)
                    t = (t + q);
            }
        }
        return result;
    }
};