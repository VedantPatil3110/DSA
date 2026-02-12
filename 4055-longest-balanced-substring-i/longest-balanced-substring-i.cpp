class Solution {
public:
    int longestBalanced(string s) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            map<char,int>mp;
            for(int j=i;j<n;j++){
                mp[s[j]]++;
                int freq=mp[s[j]];
                bool flag=true;
                for(auto x:mp){
                    if(x.second!=freq){
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    ans=max(ans,j-i+1);
                }
            }
        }
        return ans;
    }
};