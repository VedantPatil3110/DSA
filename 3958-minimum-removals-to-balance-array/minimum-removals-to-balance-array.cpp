class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int i=0;
        int maxi=0;
        for(int j=0;j<n;j++){
            while(nums[j]>(long long)nums[i]*k){
                i++;
            }
            maxi=max(maxi,j-i+1);
        }
        return n-maxi;
    }
};