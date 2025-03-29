class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        unordered_map<char,int>m;
        for(auto ch:allowed){
            m[ch]++;
        }
        for(auto word:words){
            bool flag=true;
            for(auto ch:word){
                if(m.find(ch)==m.end()){
                    flag=false;
                    break;
                }
            }
            if(flag==true){
                count++;
            }
        }
        return count;
    }
};