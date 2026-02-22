

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        int n=arr.size();
        int i=n-1;
        vector<int>ans;
        ans.push_back(arr[i]);
        for(int j=n-2;j>=0;j--){
            if(arr[i]<=arr[j]){
                ans.push_back(arr[j]);
                i=j;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};