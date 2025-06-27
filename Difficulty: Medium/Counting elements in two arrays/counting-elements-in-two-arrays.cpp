class Solution {
  public:
    vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        vector<int>ans;
        int n=a.size();
        int m=b.size();
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++){
            int st=0;
            int end=m-1;
            while(st<=end){
                int mid=st+(end-st)/2;
                if(b[mid]<=a[i]){
                    st=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            ans.push_back(end+1);
        }
        return ans;
    }
};