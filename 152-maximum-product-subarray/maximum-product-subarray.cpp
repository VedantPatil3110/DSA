class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pro1=nums[0];
        int pro2=nums[0];
        int ans=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]<0){
                swap(pro1,pro2);
            }
            pro1=max(nums[i],pro1*nums[i]);
            pro2=min(nums[i],pro2*nums[i]);
            ans=max(ans,pro1);
        }
        return ans;
    }
};