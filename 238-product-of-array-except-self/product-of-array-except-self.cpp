class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        vector<int>pre(n);
        vector<int>suff(n);
        pre[0]=1;
        suff[n-1]=1;
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            suff[i]=suff[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++){
            ans[i]=pre[i]*suff[i];
        }
        return ans;
    }
};