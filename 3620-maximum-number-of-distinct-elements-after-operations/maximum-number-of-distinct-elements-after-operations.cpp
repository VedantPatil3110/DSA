class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int prev=INT_MIN;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int l=nums[i]-k;
            int h=nums[i]+k;
            int x=prev+1;
            if(x<l){
                x=l;
            }
            if(x<=h){
                ans++;
                prev=x;
            }
        }
        return ans;
    }
};