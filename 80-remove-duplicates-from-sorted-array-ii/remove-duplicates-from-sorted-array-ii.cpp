class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<=2){
            return n;
        }
        int l=2;
        for(int i=2;i<nums.size();i++){
            if(nums[i]!=nums[l-2]){
                nums[l]=nums[i];
                l++;
            }
        }
        return l;
    }
};