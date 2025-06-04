class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int count=1;
        int maxi=1;
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1]==1){
                count++;
            }
            else if(arr[i]-arr[i-1]==0){
                continue;
            }
            else{
                count=1;
            }
            maxi=max(count,maxi);
        }
        return maxi;
    }
};