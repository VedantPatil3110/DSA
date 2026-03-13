// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        int idx=-1;
        int count=-1;
        for(int i=0;i<arr.size();i++){
            int tempcount=-1;
            int l=0;
            int h=arr[0].size()-1;
            while(l<=h){
                int mid=l+(h-l)/2;
                if(arr[i][mid]==1){
                    tempcount=arr[0].size()-mid+1;
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            if(tempcount>count){
                count=tempcount;
                idx=i;
            }
        }
        return idx;
    }
};