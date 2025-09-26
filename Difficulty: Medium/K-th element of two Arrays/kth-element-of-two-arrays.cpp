class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        int i=0;
        int j=0;
        int n=a.size();
        int m=b.size();
        int h=0;
        vector<int>arr(m+n);
        if(k>m+n){
            return -1;
        }
        while(i<n && j<m){
            if(a[i]<b[j]){
                arr[h]=a[i];
                h++;
                i++;
            }
            else{
                arr[h]=b[j];
                h++;
                j++;
            }
        }
        if(i<n && j>=m){
            while(i<n){
                arr[h]=a[i];
                i++;
                h++;
            }
        }
        if(i>=n && j<m){
            while(j<m){
                arr[h]=b[j];
                j++;
                h++;
            }
        }
        return arr[k-1];
    }
};