class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        map<int,int>m;
        for(auto x:arr){
            m[((x%k)+k)%k]++;
        }
        if(m[0]%2!=0){
            return false;
        }
        if(m.find(0)!=m.end()){
            m.erase(0);
        }
        for(auto x:m){
            int ele=x.first;
            int rem=k-ele;
            if(m.find(rem)==m.end()){
                return false;
            }
            if(m[ele]!=m[rem]){
                return false;
            }
        }
        return true;
    }
};