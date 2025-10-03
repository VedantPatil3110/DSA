class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string>ans;
        map<string,int>mp;
        if(s.size()<10){
            return {};
        }
        for(int i=0;i<=s.size()-10;i++){
            string v=s.substr(i,10);
            mp[v]++;
        }
        for(auto x:mp){
            if(x.second>1){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};