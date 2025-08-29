class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        int piviot=-1;
        while(i<=j){
            int mid=i+((j-i)/2);
            if(mid<n-1 && nums[mid]>nums[mid+1]){
                piviot=mid;
                break;
            }
            if(mid>0 && nums[mid] < nums[mid-1]){
                piviot = mid - 1;
                break;
            }
            if (nums[mid] >= nums[i]) {
                i = mid + 1;
            } 
            else {
                j = mid-1;
            }
        }
        if(piviot==-1){
            int lo=0;
            int hi=n-1;
            while(lo<=hi){
                int mid=lo+((hi-lo)/2);
                if(nums[mid]==target){
                    return mid;
                }
                else if(target<nums[mid]){
                    hi=mid-1;
                }
                else{
                    lo=mid+1;
                }
            }
        }
        else{
            if(nums[0]<=target && nums[piviot]>=target){
                int lo=0;
                int hi=piviot;
                while(lo<=hi){
                    int mid=lo+((hi-lo)/2);
                    if(nums[mid]==target){
                        return mid;
                        break;
                    }
                    else if(target<nums[mid]){
                        hi=mid-1;
                    }
                    else{
                        lo=mid+1;
                    }
                }
            }
            else{
                int lo=piviot+1;
                int hi=n-1;
                while(lo<=hi){
                    int mid=lo+((hi-lo)/2);
                    if(nums[mid]==target){
                        return mid;
                        break;
                    }
                    else if(target<nums[mid]){
                        hi=mid-1;
                    }
                    else{
                        lo=mid+1;
                    }
                }
            }
        }
        return -1;
    }
};