class Solution {
  public:
    int kthSmallest(int m, int n, int k) {
        int l=1;
        int h=m*n;
        int ans=m*n;
        while(l<=h){
            int mid=l+(h-l)/2;
            int count=0;
            for(int i=1;i<=m;i++){
                count+=min(mid/i,n);
            }
            if(count>=k){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};
