class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        if(n<2*k){
            return false;
        }
        vector<bool>check(n,false);
        for(int i=0;i+k<=n;i++){
            bool flag=true;
            for(int j=i+1;j<i+k;j++){
                if(nums[j]<=nums[j-1]){
                    flag=false;
                    break;
                }
            }
            check[i]=flag;
        }
        for(int i=0;i+2*k<=n;i++){
            if(check[i] && check[i+k]){
                return true;
            }
        }
        return false;
    }
};