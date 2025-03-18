class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>m;
        for(int x:nums) m[x]++;
        nums.clear();
        priority_queue<pair<int,int>>pq;
        for(auto x : m) pq.push({-x.second,x.first});
        while(pq.size()>0) {
            int freq = -1*pq.top().first;
            int ele = pq.top().second;
            for(int i=0;i<freq;i++) nums.push_back(ele);
            pq.pop();
        }
        return nums;
    }
};