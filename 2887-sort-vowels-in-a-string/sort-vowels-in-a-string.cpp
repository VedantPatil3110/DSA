class Solution {
public:
bool check(char f){
    if(f=='A'||f=='E'||f=='I'||f=='O'||f=='U'||f=='a'||f=='e'||f=='i'||f=='o'||f=='u'){
        return true;
    }
    return false;
}
    string sortVowels(string s) {
        priority_queue<char,vector<char>,greater<char>>pq;
        for(int i=0;i<s.size();i++){
            if(check(s[i])){
                pq.push(s[i]);
            }
        }
        string ans="";
        for(int i=0;i<s.size();i++){
            if(!check(s[i])){
                ans+=s[i];
            }
            else{
                ans+=pq.top();
                pq.pop();
            }
        }
        return ans;
    }
};