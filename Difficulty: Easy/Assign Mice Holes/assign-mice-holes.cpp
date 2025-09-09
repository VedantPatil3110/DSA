class Solution {
  public:
    int assignHole(vector<int>& mices, vector<int>& holes) {
        int ans=INT_MIN;
        sort(mices.begin(),mices.end());
        sort(holes.begin(),holes.end());
        for(int i=0;i<mices.size();i++){
            ans=max(ans,abs(holes[i]-mices[i]));
        }
        return ans;
    }
};