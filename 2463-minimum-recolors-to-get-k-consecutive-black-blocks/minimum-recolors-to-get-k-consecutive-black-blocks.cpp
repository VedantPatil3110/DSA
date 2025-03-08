class Solution {
public:
    int minimumRecolors(string s, int k) {
        int count=INT_MAX;
        int n=s.size();
        int white=0;
        for(int i=0;i<k;i++){
            if(s[i]=='W'){
                white++;
            }
        }
        for(int i=0,j=k;j<n;j++){
            count=min(white,count);
            if(s[i++]=='W'){
                white--;
            }
            if(s[j]=='W'){
                white++;
            }
        }
        return min(white,count);
    }
};