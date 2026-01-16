class Solution {
  public:
    int minMen(vector<int>& arr) {
        vector<pair<int,int>>v;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==-1){
                continue;
            }
            int start=i-arr[i];
            int end=i+arr[i];
            if(start<0) start=0;
            if(end>arr.size()-1) end=arr.size()-1;
            v.push_back({start,end});
        }
        sort(v.begin(),v.end(),[](auto &a,auto &b){
            if(a.first==b.first) return a.second>b.second;
            return a.first<b.first;
        });
        int curr=0;
        int ans=0;
        int far=0;
        int i=0;
        while(curr<arr.size()){
            far=curr-1;
            while(i<v.size() && v[i].first<=curr){
                far=max(far,v[i].second);
                i++;
            }
            if(far<curr){
                return -1;
            }
            ans++;
            curr=far+1;
        }
        return ans;
    }
};