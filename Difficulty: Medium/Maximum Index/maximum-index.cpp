class Solution {
  public:
    int maxIndexDiff(vector<int>& arr) {
        int n=arr.size();
        vector<int>small(n);
        vector<int>big(n);
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            small[i]=min(mini,arr[i]);
            mini=min(mini,arr[i]);
        }
        int maxi=INT_MIN;
        for(int i=n-1;i>=0;i--){
            big[i]=max(maxi,arr[i]);
            maxi=max(maxi,arr[i]);
        }
        int i=0;
        int j=0;
        int ans=0;
        while(i<n && j<n){
            if(small[i]<=big[j]){
                ans=max(ans,j-i);
                j++;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};