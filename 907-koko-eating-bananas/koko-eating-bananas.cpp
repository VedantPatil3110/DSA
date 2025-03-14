class Solution {
public:
long long poss(vector<int>&piles,int mid){
    long long  x=0;
    for(int i=0;i<piles.size();i++){
        x+=ceil((double)piles[i]/mid);
    }
    return x;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=INT_MIN;
        for(int i=0;i<piles.size();i++){
            maxi=max(piles[i],maxi);
        }
        int lo=1;
        int ho=maxi;
        int ans=maxi;
        while(lo<=ho){
            int mid = lo + (ho - lo) / 2;
            long long time=poss(piles,mid);
            if(time<=h){
                ans=min(ans,mid);
                ho=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return ans;
    }
};