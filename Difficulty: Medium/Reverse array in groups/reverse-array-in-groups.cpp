class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        if(k>=arr.size()){
            reverse(arr.begin(),arr.end());
            return;
        }
        int i=0;
        while(i+k-1<arr.size()){
            reverse(arr.begin()+i,arr.begin()+i+k);
            i=i+k;
        }
        if(i<arr.size()){
            reverse(arr.begin()+i,arr.end());
        }
    }
};
