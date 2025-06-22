class Solution {
  public:
    void rearrange(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        vector<int>temp(n);
        int l=0;
        int r=n-1;
        for(int i=0;i<n;i++){
            if(i%2==0){
                temp[i]=arr[r];
                r--;
            }
            else{
                temp[i]=arr[l];
                l++;
            }
        }
        for(int i=0;i<n;i++){
            arr[i]=temp[i];
        }
    }
};