class Solution {

  public:
    long long countTriplets(int n, long long sum, long long arr[]) {
        long long count=0;
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            int l=i+1;
            int r=n-1;
            while(l<r){
                if(arr[l]+arr[r]+arr[i]<sum){
                    count+=(r-l);
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        return count;
    }
};