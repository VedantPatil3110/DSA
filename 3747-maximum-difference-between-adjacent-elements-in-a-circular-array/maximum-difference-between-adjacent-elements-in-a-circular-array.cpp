class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int m=0;
        for(int i=1;i<nums.size();i++){
            m=max(m,abs(nums[i]-nums[i-1]));
        }
        int n=nums.size();
        m=max(m,abs(nums[n-1]-nums[0]));
        return m;
    }
};