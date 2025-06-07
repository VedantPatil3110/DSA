class Solution {
  public:
    int longestCommonSum(vector<int> &a1, vector<int> &a2) {
       int sum1=0;
       int sum2=0;
       int ans=0;
       map<int,int>mp;
       int n=a1.size();
       int diff=0;
       for(int i=0;i<n;i++){
           sum1+=a1[i];
           sum2+=a2[i];
           diff=sum1-sum2;
           if(diff==0){
               ans=i+1;
           }
           if(mp.find(diff)!=mp.end()){
               ans=max(ans,i-mp[diff]);
           }
           else{
               mp[diff]=i;
           }
       }
       return ans;
    }
};