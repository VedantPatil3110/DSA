class Solution {
  public:
  long long fn(int mid,int n,int m){
      int ans=1;
      for(int i=0;i<n;i++){
          ans*=mid;
          if(ans>m){
              return ans;
          }
      }
      return ans;
  }
    int nthRoot(int n, int m) {
        int i=0;
        int j=m;
        while(i<=j){
            int mid=i+(j-i)/2;
            long long power=fn(mid,n,m);
            if(power==m){
                return mid;
            }
            else if(power<m){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return -1;
    }
};