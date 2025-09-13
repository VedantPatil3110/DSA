class Solution {
public:
bool solve(char x){
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
        return true;
    }
    return false;
}
    int maxFreqSum(string s) {
        int vsum=0;
        int csum=0;
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto x:mp){
            if(solve(x.first)){
                vsum=max(vsum,x.second);
            }
            else{
                csum=max(csum,x.second);
            }
        }
        return vsum+csum;
    }
};