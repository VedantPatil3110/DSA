class Solution {
  public:
    vector<int> vFill(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            arr[i]=0;
        }
        return arr;
    }
};
