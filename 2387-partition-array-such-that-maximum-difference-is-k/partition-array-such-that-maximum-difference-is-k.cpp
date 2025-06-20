class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int smol=nums[0];
        int i=1;
        int ans=1;
        while(i<n){
            if(nums[i]-smol>k){
                ans++;
                smol=nums[i];
            }
            i++;
        }
        return ans;
    }
};