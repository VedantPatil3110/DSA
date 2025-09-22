class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxi=-1;
        unordered_map<int,int> mp;
        for (int num : nums) {
            mp[num]++;
        }
        for(int i=0;i<nums.size();i++){
            if(maxi<mp[nums[i]]){
                maxi=mp[nums[i]];
            }
        }
        int ans=0;
        for(auto a:mp){
            if(a.second==maxi){
                ans+=maxi;
            }
        }
        return ans;
    }
};