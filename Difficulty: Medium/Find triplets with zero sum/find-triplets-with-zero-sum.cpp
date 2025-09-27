class Solution {
  public:
    bool findTriplets(vector<int> &arr) {
        sort(arr.begin(),arr.end());
        for(int i=arr.size()-2;i>=0;i--){
            int j=i+1;
            int k=arr.size()-1;
            while(j<k){
                int sum=arr[i]+arr[j]+arr[k];
                if(sum==0){
                    return true;
                }
                else if(sum<0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return false;
    }
};