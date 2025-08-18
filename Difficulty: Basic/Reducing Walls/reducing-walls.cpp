// Function to count the number of walls that need to be reduced.
class Solution {
  public:
    int reducingWalls(vector<int>& arr, int k) {
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>k){
                count+=(arr[i]-1)/k;
            }
        }
        return count;
    }
};