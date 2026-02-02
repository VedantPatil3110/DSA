class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        for(int i=1;i<arr.size();i++){
            int idx=i;
            for(int j=i-1;j>=0;j--){
                if(arr[j]>arr[idx]){
                    swap(arr[idx],arr[j]);
                    idx=j;
                }
            }
        }
    }
};