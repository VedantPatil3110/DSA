class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ans(nums.size(),0);
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                ans[j]=nums[i];
                j++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==pivot){
                ans[j]=nums[i];
                j++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>pivot){
                ans[j]=nums[i];
                j++;
            }
        }
        return ans;
    }
};