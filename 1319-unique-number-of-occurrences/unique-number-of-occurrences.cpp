class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>m;
        unordered_set<int>s;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        for(auto x:m){
            int ele=x.second;
            if(s.find(ele)!=s.end()){
                return false;
            }
            else{
                s.insert(ele);
            }
        }
        return true;
    }
};