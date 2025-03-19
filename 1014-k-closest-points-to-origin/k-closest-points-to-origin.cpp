class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
        int n=arr.size();
        priority_queue<pair<double,pair<int,int>>>p;
        for(int i=0;i<n;i++){
            double a=sqrt((arr[i][0]*arr[i][0])+(arr[i][1]*arr[i][1]));
            p.push({a,{arr[i][0],arr[i][1]}});
            if(p.size()>k){
                p.pop();
            }
        }
        vector<vector<int>>ans;
        while(!p.empty()){
            ans.push_back({p.top().second.first,p.top().second.second});
            p.pop();
        }
        return ans;
    }
};