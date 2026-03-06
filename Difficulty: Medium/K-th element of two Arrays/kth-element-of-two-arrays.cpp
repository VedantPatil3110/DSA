class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        int ans=0;
        int i=0;
        int j=0;
        int n=a.size();
        int m=b.size();
        while(i<n && j<m && k>0){
            if(a[i]<b[j]){
                ans=a[i];
                i++;
            }
            else{
                ans=b[j];
                j++;
            }
            k--;
        }
        if(k==0){
            return ans;
        }
        if(k>0 && i>=n && j<m){
            while(k>0 && j<m){
                ans=b[j];
                j++;
                k--;
            }
            if(k==0){
                return ans;
            }
        }
        if(k>0 && i<n && j>=m){
            while(k>0 && i<n){
                ans=a[i];
                i++;
                k--;
            }
            if(k==0){
                return ans;
            }
        }
        return -1;
    }
};