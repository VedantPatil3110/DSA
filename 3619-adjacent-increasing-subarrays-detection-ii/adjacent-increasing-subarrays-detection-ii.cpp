class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int n=nums.size();
        if(n<2){
            return 0;
        }
        vector<int>inc(n,1);
        vector<int>dec(n,1);
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                inc[i]=inc[i-1]+1;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                dec[i]=dec[i+1]+1;
            }
        }
        int ans=0;
        for(int i=1;i<n;i++){
            ans=max(ans,min(inc[i-1],dec[i]));
        }
        return ans;
    }
};