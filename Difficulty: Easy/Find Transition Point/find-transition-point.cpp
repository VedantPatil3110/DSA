class Solution {
  public:
    int transitionPoint(vector<int>& arr) {
        int ans=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==1){
                return i;
            }
        }
        return ans;
    }
};