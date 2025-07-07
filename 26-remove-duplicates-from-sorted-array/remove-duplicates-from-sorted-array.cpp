class Solution {
public:
    int removeDuplicates(vector<int>& nums){
        // int idx=1;
        //  for(int i=1;i<nums.size();i++){
        //     if(nums[i]!=nums[i-1]){
        //         nums[idx]=nums[i];
        //         idx++;
        //     }
        // }
        // return idx;
        // int i=0;
        // int j=i+1;
        // while(j<nums.size()){
        //     if(nums[i]==nums[j]){
        //        j++;
        //     }
        //     else{
        //         i++;
        //         nums[i] = nums[j];
        //         j++;
        //     }
        // }
        // return j+1;
        int index=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[index]=nums[i];
                index++;
            }
        }
        return index;
    }
};