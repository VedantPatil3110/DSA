class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        int inc=1;
        int dec=1;
        int mc=0;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                inc++;
                dec=1;
            }
            else if(nums[i]<nums[i-1]){
                inc=1;
                dec++;
            }
            else{
                inc=1;
                dec=1;
            }
            mc=max(mc,max(inc,dec));
        }
        return mc;
    }
};