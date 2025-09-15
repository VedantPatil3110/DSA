class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        sort(a.begin(),a.end());
        int mini=INT_MAX;
        int i=0;
        int n=a.size();
        int j=m-1;
        while(j<n){
            int diff=a[j]-a[i];
            mini=min(mini,diff);
            i++;
            j++;
        }
        return mini;
    }
};