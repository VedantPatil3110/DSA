class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        set<char>s(brokenLetters.begin(),brokenLetters.end());
        stringstream ss(text);
        string word;
        int ans=0;
        while(ss>>word){
            bool check=true;
            for(int i=0;i<word.size();i++){
                if(s.find(word[i])!=s.end()){
                    check=false;
                    break;
                }
            }
            if(check==true){
                ans++;
            }
        }
        return ans;
    }
};