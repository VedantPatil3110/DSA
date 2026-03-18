class Solution {
public:
    int myAtoi(string s) {
        int idx=0;
        while(idx<s.size() && s[idx]==' '){
            idx++;
        }
        int mul=1;
        if(idx<s.size() && (s[idx]=='-' || s[idx]=='+')){
            if(s[idx]=='-'){
                mul=-1;
            }
            idx++;
        }
        long num=0;
        for(int i=idx;i<s.size();i++){
            if((s[i]-'0')>9 || (s[i]-'0')<0){
                break;
            }
            num=num*10+(s[i]-'0');
            if(mul*num>INT_MAX){
                return INT_MAX;
            }
            if(mul*num<INT_MIN){
                return INT_MIN;
            }
        }
        return mul*num;
    }
};