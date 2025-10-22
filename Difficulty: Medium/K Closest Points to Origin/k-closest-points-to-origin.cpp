class Solution {
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans;
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        for(int i=0;i<points.size();i++){
            int c=points[i][0]*points[i][0]+points[i][1]*points[i][1];
            pq.push({c,{points[i][0],points[i][1]}});
        }
        while(k--){
            int a=pq.top().second.first;
            int b=pq.top().second.second;
            ans.push_back({a,b});
            pq.pop();
        }
        return ans;
    }
};