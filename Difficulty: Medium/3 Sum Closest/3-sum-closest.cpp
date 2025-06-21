// User function Template for C++

class Solution {
  public:
    int closest3Sum(vector<int> &arr, int target) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int ans=0;
        int mini=INT_MAX;
        for(int i=0;i<n-2;i++){
            int left=i+1;
            int right=n-1;
            while(left<right){
                int sum=arr[i]+arr[left]+arr[right];
                if(abs(sum-target)<mini){
                    mini=abs(sum-target);
                    ans=sum;
                }
                else if(abs(sum-target)==mini){
                    ans=max(sum,ans);
                }
                if(sum>target){
                    right--;
                }
                else{
                    left++;
                }
            }
        }
        return ans;
    }
};