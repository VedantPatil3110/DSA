class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int,int>m;
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(m[k-nums[i]]>0){
                m[k-nums[i]]--;
                ans++;
            }
            else{
                m[nums[i]]++;
            }
        }
        return ans;
    }
};