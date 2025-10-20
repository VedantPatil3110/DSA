class Solution {
public:
    string smallestString(string s) {
        int n=s.size();
        bool flag=true;
        for(int i=0;i<n;i++){
            if(s[i]!='a'){
                flag=false;
                break;
            }
        }
        if(flag){
            s[n-1]='z';
            return s;
        }
        int i=0;
        while(i<n && s[i]=='a'){
            i++;
        }
        while(i<n && s[i]!='a'){
            s[i]--;
            i++;
        }
        return s;
    }
};