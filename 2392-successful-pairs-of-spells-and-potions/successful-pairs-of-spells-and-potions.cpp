class Solution {
public:
int solve(vector<int>&potions,long long point,long long s){
    int i=0;
    int j=potions.size()-1;
    int ans=-1;
    while(i<=j){
        int mid=i+((j-i)/2);
        if(1LL*potions[mid]*point>=s){
            ans=mid;
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    return ans;
}
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int>ans(spells.size());
        for(int i=0;i<spells.size();i++){
            int idx=solve(potions,spells[i],success);
            if(idx!=-1){
                ans[i]=potions.size()-idx;
            }
        }
        return ans;
    }
};