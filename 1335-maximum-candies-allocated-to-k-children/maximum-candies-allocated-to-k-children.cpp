class Solution {
public:
bool check(vector<int>&candies,int mid,long long k){
    long long x=0;
    for(int i=0;i<candies.size();i++){
        x+=(long long)(candies[i]/mid);
    }
    if(x>=k){
        return true;
    }
    else{
        return false;
    }
}
    int maximumCandies(vector<int>& candies, long long k) {
        int n=candies.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,candies[i]);
        }
        int l=1;
        int h=maxi;
        int ans=0;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(check(candies,mid,k)){
                ans=max(ans,mid);
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return ans;
    }
};