class Solution {
public:
bool help(vector<int>&nums,int mid,int k){
    int n=nums.size();
    int i=0;
    while(i<n){
        if(nums[i]<=mid){
            k--;
            i+=2;
        }
        else{
            i++;
        }
        if(k==0){
            return true;
        }
    }
    return false;
}
    int minCapability(vector<int>& nums, int k) {
        int i=INT_MAX;
        int n=nums.size();
        int j=INT_MIN;
        for(auto x:nums){
            j=max(j,x);
            i=min(i,x);
        }
        int ans=INT_MAX;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(help(nums,mid,k)){
                ans=min(ans,mid);
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return ans;
    }
};