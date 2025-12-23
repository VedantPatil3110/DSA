class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        double ans=0;
        vector<pair<int,int>>v;
        for(int i=0;i<val.size();i++){
            v.push_back({val[i],wt[i]});
        }
        sort(v.begin(),v.end(),[](auto &a,auto &b){
            return (double)a.first/a.second>(double)b.first/b.second;
        });
        for(auto x:v){
            if(x.second<=capacity){
                ans+=x.first;
                capacity-=x.second;
            }
            else{
                ans+=((double)x.first*capacity)/x.second;
                break;
            }
        }
        return ans;
    }
};
