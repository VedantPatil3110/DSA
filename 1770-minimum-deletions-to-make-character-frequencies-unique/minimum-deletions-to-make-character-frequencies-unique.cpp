class Solution {
public:
    int minDeletions(string s) {
        map<char,int>mp;
        for(auto x:s){
            mp[x]++;
        }
        vector<int>f(mp.size());
        set<int>st;
        int idx=0;
        for(auto x:mp){
            f[idx++]=x.second;
        }
        int ans=0;
        for(int i=0;i<f.size();i++){
            if(!st.count(f[i])){
                st.insert(f[i]);
            }
            else{
                while(st.count(f[i])){
                    f[i]--;
                    ans++;
                }
                if(f[i]>0){
                    st.insert(f[i]);
                }
            }
        }
        return ans;
    }
};