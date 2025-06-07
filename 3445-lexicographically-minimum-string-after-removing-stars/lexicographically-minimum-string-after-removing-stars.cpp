class Solution {
public:
struct Compare {
    bool operator()(const pair<char, int>& a, const pair<char, int>& b) {
        if (a.first!= b.first)
            return a.first > b.first;
        return a.second < b.second;
    }
};
    string clearStars(string s) {
       priority_queue<pair<char, int>, vector<pair<char, int>>, Compare> pq;
        int n=s.size();
        vector<int>k; 
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                k.push_back(i);
                if(!pq.empty()){
                    k.push_back(pq.top().second);
                    pq.pop();
                }
            }
            else pq.push({s[i],i});
        } 
        sort(k.begin(),k.end());
        for(int i=k.size()-1;i>=0;i--){
            s.erase(k[i],1);
        }
        return s;
    }
};