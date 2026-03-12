class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        if(n > m) return findMedianSortedArrays(nums2, nums1);
        int k=(n+m+1)/2;
        int i=0;
        int j=n;
        while(i<=j){
            int mid1=i+(j-i)/2;
            int mid2=k-mid1;
            int l1=INT_MIN;
            int l2=INT_MIN;
            int r1=INT_MAX;
            int r2=INT_MAX;
            if(mid1>0){
                l1=nums1[mid1-1];
            }
            if(mid2>0){
                l2=nums2[mid2-1];
            }
            if(mid1<n){
                r1=nums1[mid1];
            }
            if(mid2<m){
                r2=nums2[mid2];
            }
            if(l1>r2){
                j=mid1-1;
            }
            else if(l2>r1){
                i=mid1+1;
            }
            else{
                if((n+m)%2==1){
                    return max(l1,l2);
                }
                int maxi=max(l1,l2);
                int mini=min(r1,r2);
                double ans=double(maxi+mini)/2;
                return ans;
            }
        }
        return -1;
    }
};