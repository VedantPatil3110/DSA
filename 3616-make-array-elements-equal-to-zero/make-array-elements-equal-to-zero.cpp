class Solution {
public:
bool solve(vector<int>&nums,int count,int i,int dir){
    int idx=i;
    vector<int>temp=nums;
    while(idx>=0 && idx<nums.size() && count>0){
        if(temp[idx]>0){
            temp[idx]--;
            dir*=-1;
            if(temp[idx]==0){
                count--;
            }
        }
        idx+=dir;
    }
    return count==0;
}
    int countValidSelections(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                count++;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                if(solve(nums,count,i,-1)){
                    ans++;
                }
                if(solve(nums,count,i,1)){
                   ans++;
                }
            }
        }
        return ans;
    }
};