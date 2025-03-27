class Solution {
public:
    int maxDifference(string s) {
        unordered_map<int,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        int mo=INT_MIN;
        int me=INT_MAX;
        for(int i=0;i<s.size();i++){
            if(m[s[i]]%2!=0){
                if(m[s[i]]>mo){
                    mo=m[s[i]];
                }
            }
            else{
                if(me>m[s[i]]){
                    me=m[s[i]];
                }
            }
        }
        return (mo-me);
    }
};