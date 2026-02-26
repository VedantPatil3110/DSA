class Solution {
  public:
    int findMin(vector<int>& arr) {
        int n=arr.size();
        int i=0;
        int j=n-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(arr[mid]<arr[j]){
                j=mid;
            }
            else{
                i=mid+1;
            }
        }
        return arr[j];
    }
};