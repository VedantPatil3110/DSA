class Solution {
  public:
    vector<int> farMin(vector<int>& arr) {
        int n=arr.size();
        vector<int>suff(n+1,INT_MAX);
        for(int i=n-1;i>=0;i--){
            suff[i]=min(suff[i+1],arr[i]);
        }
        vector<int>ans(n);
        for(int k=0;k<n;k++){
            int i=k+1;
            int j=n-1;
            int a=-1;
            while(i<=j){
                int mid=i+(j-i)/2;
                if(suff[mid]<arr[k]){
                    a=mid;
                    i=mid+1;
                }
                else{
                    j=mid-1;
                }
            }
            ans[k]=a;
        }
        return ans;
    }
};