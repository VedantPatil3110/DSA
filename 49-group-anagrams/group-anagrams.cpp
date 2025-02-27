class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>m;
        for(int i=0;i<n;i++){
            string l=strs[i];
            sort(l.begin(),l.end());
            m[l].push_back(strs[i]);
        }
        for(auto x:m){
            ans.push_back(x.second);
        }
        return ans;
    }
};