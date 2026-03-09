class Solution {
  public:
  int fn(vector<int>&arr,int mid){
      int student=1;
      int pages=0;
      for(int i=0;i<arr.size();i++){
          if(pages+arr[i]<=mid){
              pages+=arr[i];
          }
          else{
              student++;
              pages=arr[i];
          }
      }
      return student;
  }
    int findPages(vector<int> &arr, int k) {
        int n=arr.size();
        if(k>n){
            return -1;
        }
        int i=*max_element(arr.begin(),arr.end());
        int j=accumulate(arr.begin(),arr.end(),0);
        int ans=-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            int count=fn(arr,mid);
            if(count<=k){
                ans=mid;
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return ans;
    }
};