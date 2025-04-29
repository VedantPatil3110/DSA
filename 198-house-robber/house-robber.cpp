class Solution {
public:
    int rob(vector<int>& nums) {
        int maxi=0;
        int rob=0;
        for(int i=0;i<nums.size();i++){
            int temp=max(maxi,rob+nums[i]);
            rob=maxi;
            maxi=temp;
        }
        return maxi;
    }
};