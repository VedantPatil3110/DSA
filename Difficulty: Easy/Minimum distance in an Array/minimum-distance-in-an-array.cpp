class Solution {
  public:
    int minDist(vector<int>& arr, int x, int y) {
        int n=arr.size();
        int a=-1;
        int b=-1;
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                a=i;
            }
            if(arr[i]==y){
                b=i;
            }
            if(a!=-1 && b!=-1){
                ans=min(ans,abs(a-b));
            }
        }
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};