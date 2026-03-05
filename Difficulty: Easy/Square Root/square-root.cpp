class Solution {
  public:
    int floorSqrt(int n) {
        if(n==1 || n==0){
            return n;
        }
        int i=0;
        int j=n;
        int ans=0;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(mid*mid==n){
                return mid;
            }
            else if(mid*mid<n){
                ans=mid;
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return ans;
    }
};