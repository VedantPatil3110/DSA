class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>v;
        for(auto x:bank){
            int count=0;
            for(auto y:x){
                if(y=='1'){
                    count++;
                }
            }
            if(count>0){
                v.push_back(count);
            }
        }
        int ans=0;
        for(int i=1;i<v.size();i++){
            ans+=v[i]*v[i-1];
        }
        return ans;
    }
};