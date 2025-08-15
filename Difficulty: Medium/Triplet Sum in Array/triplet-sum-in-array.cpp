class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            int l=i+1;
            int r=arr.size()-1;
            int ans=target-arr[i];
            while(l<r){
                if(arr[l]+arr[r]==ans){
                    return true;
                }
                else if(arr[l]+arr[r]>ans){
                    r--;
                }
                else{
                    l++;
                }
            }
        }
        return false;
    }
};