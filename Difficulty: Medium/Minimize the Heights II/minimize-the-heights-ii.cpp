class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int res=abs(arr[0]-arr[n-1]);
        for(int i=1;i<n;i++){
            if(arr[i]-k<0){
                continue;
            }
            int m=min(arr[0]+k,arr[i]-k);
            int p=max(arr[n-1]-k,arr[i-1]+k);
            res=min(res,p-m);
        }
        return res;
    }
};