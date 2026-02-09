class Solution {
  public:
    int maxSum(vector<int> &arr) {
        int n=arr.size();
        int currsum=0;
        for(int i=0;i<arr.size();i++){
            currsum+=arr[i];
        }
        int currval=0;
        for(int i=0;i<n;i++){
            currval+=arr[i]*i;
        }
        int ans=currval;
        for(int i=1;i<n;i++){
            int nextval=currval-(currsum-arr[i-1])+arr[i-1]*(n-1);
            currval=nextval;
            ans=max(ans,nextval);
        }
        return ans;
    }
};