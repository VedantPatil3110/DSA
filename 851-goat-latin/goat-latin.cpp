class Solution {
public:
    string toGoatLatin(string sentence) {
        string s;
        vector<string>v;
        sentence+=' ';
        for(auto u:sentence){
            if(u==' '){
                v.push_back(s);
                s.clear();
                continue;
            }
            s+=u;
        }
        int j=1;
        string s2;
        for(auto u:v){
            string s1=u;
            if(s1[0]=='a'||s1[0]=='e'||s1[0]=='i'||s1[0]=='o'||s1[0]=='u'||s1[0]=='A'||s1[0]=='E'||s1[0]=='I'||s1[0]=='O'||s1[0]=='U'){
                s2+=s1;
                s2+="ma";
            }
            else{
                char ch=s1[0];
                reverse(s1.begin(),s1.end());
                s1.pop_back();
                reverse(s1.begin(),s1.end());
                s1+=ch;
                s2+=s1;
                s2+="ma";
            }
            for(int i=0;i<j;i++){
                s2+='a';
            }
            s2+=' ';
            j++;
        }
        s2.pop_back();
        return s2;
    }
};