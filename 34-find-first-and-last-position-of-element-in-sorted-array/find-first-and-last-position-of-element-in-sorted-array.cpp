class Solution {
public:
int lowerbound(vector<int>&nums,int x,int n){
    int i=0;
    int j=n-1;
    int ans=n;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(nums[mid]>=x){
            ans=mid;
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    return ans;
}
int upperbound(vector<int>&nums,int x,int n){
    int i=0;
    int j=n-1;
    int ans=n;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(nums[mid]>x){
            ans=mid;
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int lb=lowerbound(nums,target,n);
        int ub=upperbound(nums,target,n);
        if(lb==n || nums[lb]!=target){
            return {-1,-1};
        }
        return {lb,ub-1};
    }
};