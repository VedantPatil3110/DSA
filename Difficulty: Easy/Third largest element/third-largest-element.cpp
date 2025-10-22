class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        set<int>st(arr.begin(),arr.end());
        if(st.size()<3){
            return -1;
        }
        // arr.clear();
        // for(auto x:st){
        //     arr.push_back(x);
        // }
        sort(arr.begin(),arr.end());
        return arr[arr.size()-3];
    }
};