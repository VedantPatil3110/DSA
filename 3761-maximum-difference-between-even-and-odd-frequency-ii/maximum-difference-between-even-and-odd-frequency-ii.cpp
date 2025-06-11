class Solution {
public:
    int frq[30009][5];
    int maxDifference(string s, int k) {
        int n=s.size();
        for (int i=0; i<n; i++) {
            frq[i+1][s[i]-'0']++;
            for (int j=0; j<5; j++) {
                frq[i+1][j]+=frq[i][j];
            }
        }

        int ans=-1e5;
        for (int a=0; a<5; a++) {
            for (int b=0; b<5; b++) {
                if (a == b) continue;
                const int inf=1e6;
                int l=0, r=k-1, dif[2][2]={{inf, inf}, {inf, inf}};
                while (++r <= n) {
                    int frq_a=frq[r][a], frq_b=frq[r][b];
                    int prv_a=frq[l][a], prv_b=frq[l][b];
                    while (r-l >= k && frq_b-prv_b > 1) {
                        dif[prv_a%2][prv_b%2]=min(dif[prv_a%2][prv_b%2], prv_a-prv_b);
                        l++;
                        prv_a=frq[l][a], prv_b=frq[l][b];
                    }
                    ans=max(ans, frq_a-frq_b-dif[!(frq_a%2)][frq_b%2]);
                }
            }
        }

        return ans;
    }
};