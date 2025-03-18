class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // map<int,int>m;
        // for(auto x:nums){
        //     m[x]++;
        // }
        // if(nums.size()==k){
        //     return nums;
        // }
        // vector<int>ans;
        // for(auto x:m){
        //     if(x.second>=k){
        //         ans.push_back(x.first);
        //     }
        // }
        // return ans;
        map<int,int>m;
        for(auto x:nums){
            m[x]++;
        }
        priority_queue<pair<int,int>>p;
        for(auto x:m){
            p.push({x.second,x.first});
        }
        vector<int>ans(k);
        for(int i=0;i<k;i++){
            ans[i]=p.top().second;
            p.pop();
        }
        return ans;
    }
};