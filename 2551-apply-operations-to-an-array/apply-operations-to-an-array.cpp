class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i-1]==nums[i]){
                nums[i-1]=nums[i-1]*2;
                nums[i]=0;
            }
        }
        int count=0;
        vector<int>v;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count++;
            }
            else{
                v.push_back(nums[i]);
            }
        }
        for(int i=0;i<count;i++){
            v.push_back(0);
        }
        return v;
    }
};