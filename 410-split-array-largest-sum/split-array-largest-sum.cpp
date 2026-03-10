class Solution {
public:
bool fn(vector<int>&nums,int k,int mid){
    int sum=0;
    int ans=1;
    for(int i=0;i<nums.size();i++){
        if(sum+nums[i]<=mid){
            sum+=nums[i];
        }
        else{
            sum=nums[i];
            ans++;
        }
    }
    if(ans<=k){
        return true;
    }
    else{
        return false;
    }
}
    int splitArray(vector<int>& nums, int k) {
        int i=*max_element(nums.begin(),nums.end());
        int j=accumulate(nums.begin(),nums.end(),0);
        int ans=0;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(fn(nums,k,mid)){
                ans=mid;
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return ans;
    }
};