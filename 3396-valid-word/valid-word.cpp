class Solution {
public:
    bool isValid(string word) {
        int n=word.size();
        if(n<3){
            return false;
        }
        int v=0;
        int c=0;
        for(int i=0;i<n;i++){
            if(!isalnum(word[i])){
                return false;
            }
            if(isalpha(word[i])){
                char l=tolower(word[i]);
                if(l=='a'||l=='e'||l=='i'||l=='o'||l=='u'){
                    v++;
                }
                else{
                    c++;
                }
            }
        }
        if(v>0 && c>0){
            return true;
        }
        else{
            return false;
        }
    }
};