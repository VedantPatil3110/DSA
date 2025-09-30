class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        int maxi=sum;
        for(int i=k;i<arr.size();i++){
            sum+=arr[i]-arr[i-k];
            maxi=max(sum,maxi);
        }
        return maxi;
    }
};