class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>pre(nums.size());
        vector<int>suff(nums.size());
        pre[nums.size()-1]=nums[nums.size()-1];
        suff[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            suff[i]=suff[i-1]+nums[i];
        }
        for(int i=nums.size()-2;i>=0;i--){
            pre[i]=pre[i+1]+nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(pre[i]==suff[i]){
                return i;
            }
        }
        return -1;
    }
};