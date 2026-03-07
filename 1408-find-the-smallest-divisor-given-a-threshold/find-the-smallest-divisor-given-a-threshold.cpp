class Solution {
public:
bool freaky(vector<int>&nums,int t,int mid){
    int sum=0;
    for(int i=0;i<nums.size();i++){
        int temp=ceil(double(nums[i])/mid);
        sum+=temp;
    }
    if(sum<=t){
        return true;
    }
    return false;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int i=1;
        int j=*max_element(nums.begin(),nums.end());
        int ans=-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(freaky(nums,threshold,mid)){
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