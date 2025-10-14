class Solution {
  public:
    int maxLength(vector<int>& arr) {
        map<int,int>mp;
        int sum=0;
        mp[0]=-1;
        int ans=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(mp.count(sum)){
                ans=max(ans,i-mp[sum]);
            }
            else{
                mp[sum]=i;
            }
        }
        return ans;
    }
};