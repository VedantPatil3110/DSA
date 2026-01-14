// User function template for C++
class Solution {
  public:
    int search(int n, int arr[]) {
        int i=0;
        int j=n-1;
        while(i<j){
            int mid=i+(j-i)/2;
            if(mid%2!=0){
                mid--;
            }
            if(arr[mid]==arr[mid+1]){
                i=mid+2;
            }
            else{
                j=mid;
            }
        }
        return arr[i];
    }
};