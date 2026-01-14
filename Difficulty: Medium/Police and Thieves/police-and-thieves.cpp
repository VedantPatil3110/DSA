class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        int i=0;
        int j=0;
        int count=0;
        int n=arr.size();
        while(i<n && j<n){
            while(i<n && arr[i]!='P'){
                i++;
            }
            while(j<n && arr[j]!='T'){
                j++;
            }
            if(i<n && j<n && abs(i-j)<=k){
                count++;
                i++;
                j++;
            }
            else if(i<n && j<n && i<j){
                i++;
            }
            else{
                j++;
            }
        }
        return count;
    }
};