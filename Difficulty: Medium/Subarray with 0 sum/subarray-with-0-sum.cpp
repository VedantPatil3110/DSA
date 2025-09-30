class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        map<int,int>mp;
        int sum=0;
        for(auto x:arr){
            sum+=x;
            if(sum==0 || x==0 || mp.find(sum)!=mp.end()){
                return true;
            }
            mp[sum]++;
        }
        return false;
    }
};