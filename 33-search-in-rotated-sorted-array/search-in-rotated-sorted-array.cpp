class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n=arr.size();
        int i=0;
        int j=n-1;
        int piviot=-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(mid<n-1 && arr[mid]>arr[mid+1]){
                piviot=mid;
                break;
            }
            if(mid>0 && arr[mid]<arr[mid-1]){
                piviot=mid-1;
                break;
            }
            if(arr[mid]>=arr[i]){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        if(piviot==-1){
            int lo=0;
            int hi=n-1;
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                if(arr[mid]==target){
                    return mid;
                }
                else if(arr[mid]<target){
                    lo=mid+1;
                }
                else{
                    hi=mid-1;
                }
            }
        }
        else if(target>=arr[0] && target<=arr[piviot]){
            int lo=0;
            int hi=piviot;
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                if(arr[mid]==target){
                    return mid;
                }
                else if(arr[mid]<target){
                    lo=mid+1;
                }
                else{
                    hi=mid-1;
                }
            }
        }
        else{
            int lo=piviot+1;
            int hi=n-1;
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                if(arr[mid]==target){
                    return mid;
                }
                else if(arr[mid]<target){
                    lo=mid+1;
                }
                else{
                    hi=mid-1;
                }
            }
        }
        return -1;
    }
};