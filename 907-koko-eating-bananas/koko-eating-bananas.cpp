class Solution {
public:
long long freaky(vector<int>&piles,int x){
    long long ans=0;
    for(int i=0;i<piles.size();i++){
        ans=ans+ceil(double(piles[i])/x);
    }
    return ans;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int i=1;
        int j=*max_element(piles.begin(),piles.end());
        int ans=0;
        while(i<=j){
            int mid=i+(j-i)/2;
            long long cal=freaky(piles,mid);
            if(cal<=h){
                ans=mid;
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return ans;
    }
};