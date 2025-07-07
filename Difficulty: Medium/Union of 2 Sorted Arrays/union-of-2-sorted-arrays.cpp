class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        vector<int>ans;
        set<int>st;
        for(int i=0;i<a.size();i++){
            st.insert(a[i]);
        }
        for(int i=0;i<b.size();i++){
            st.insert(b[i]);
        }
        for(auto x:st){
            ans.push_back(x);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};