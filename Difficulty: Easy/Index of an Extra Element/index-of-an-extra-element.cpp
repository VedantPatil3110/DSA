class Solution {
  public:
    int findExtra(vector<int>& a, vector<int>& b) {
        if(b.size()==0){
            return a[0];
        }
        int i=0;
        while(i<a.size()){
            if(a[i]!=b[i]){
                return i;
            }
            i++;
        }
        return a.size()-1;
    }
};