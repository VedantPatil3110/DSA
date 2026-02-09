class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int n=arr.size();
        int i=0;
        int j=n-1;
        while(i<j){
            int mid=i+(j-i)/2;
            if(arr[mid]>arr[j]){
                i=mid+1;
            }
            else{
                j=mid;
            }
        }
        return i;
    }
};
