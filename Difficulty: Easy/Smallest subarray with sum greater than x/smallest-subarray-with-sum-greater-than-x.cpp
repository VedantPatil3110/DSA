class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
       int i=0;
       int j=0;
       int sum=0;
       int ans=arr.size()+1;
       while(j<arr.size()){
           sum+=arr[j];
           j++;
           while(sum>x){
               ans=min(ans,j-i);
               sum-=arr[i];
               i++;
           }
       }
       if(ans==arr.size()+1){
           return 0;
       }
       return ans;
    }
};