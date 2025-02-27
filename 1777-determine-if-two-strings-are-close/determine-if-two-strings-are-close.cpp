class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()){
            return false;
        }
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        for(auto x:word1){
            m1[x]++;
        }
        for(auto x:word2){
            m2[x]++;
        }
        for(auto x:m1){
            char ch=x.first;
            if(m2.find(ch)==m2.end()){
                return false;
            }
        }
        unordered_map<int,int>h1;
        unordered_map<int,int>h2;
        for(auto x:m1){
            int f=x.second;
            h1[f]++;
        }
        for(auto x:m2){
            int f=x.second;
            h2[f]++;
        }
        for(auto x:h1){
            int f=x.first;
            if(h2.find(f)==h2.end()){
                return false;
            }
            if(h1[f]!=h2[f]){
                return false;
            }
        }
        return true;
    }
};