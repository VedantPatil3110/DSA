class Solution {
public:
    string findLexSmallestString(string s, int a, int b) {
        set<string>vis;
        queue<string>q;
        string mini=s;
        q.push(s);
        while(!q.empty()){
            string nigga=q.front();
            q.pop();
            if(nigga<mini){
                mini=nigga;
            }
            string chigga=nigga;
            for(int i=0;i<chigga.size();i++){
                if(i%2!=0){
                    chigga[i]=((chigga[i]-'0'+a)%10)+'0';
                }
            }
            if(vis.find(chigga)==vis.end()){
                vis.insert(chigga);
                q.push(chigga);
            }
            chigga.clear();
            chigga=nigga;
            for(int i=0;i<b;i++){
                char c=chigga[chigga.size()-1];
                chigga.pop_back();
                chigga.insert(chigga.begin(),c);
            }
            if(vis.find(chigga)==vis.end()){
                vis.insert(chigga);
                q.push(chigga);
            }
        }
        return mini;
    }
};