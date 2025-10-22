// User function template for C++
class Solution {
  public:
    vector<int> printUnsorted(vector<int>& arr) {
        vector<int>v;
        v=arr;
        sort(v.begin(),v.end());
        vector<int>ans(2,0);
        for(int i=0;i<arr.size();i++){
            if(v[i]!=arr[i]){
                ans[0]=i;
                break;
            }
        }
        for(int i=arr.size()-1;i>=0;i--){
            if(v[i]!=arr[i]){
                ans[1]=i;
                break;
            }
        }
        return ans;
    }
};