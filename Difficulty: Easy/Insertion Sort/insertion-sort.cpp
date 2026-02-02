class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        for(int i=1;i<arr.size();i++){
            int freaky=arr[i];
            int j=i-1;
            while(j>=0 && arr[j]>freaky){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=freaky;
        }
    }
};