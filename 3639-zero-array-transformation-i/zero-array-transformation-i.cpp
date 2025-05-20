class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int>freq(n+2,0);
        for(auto q:queries){
            int a=q[0];
            int b=q[1];
            freq[a]++;
            freq[b+1]--;
        }
        for(int i=1;i<=n;i++){
            freq[i]+=freq[i-1];
        }
        for(int i=0;i<n;i++){
            if(freq[i]<nums[i]){
                return false;
            }
        }
        return true;
    }
};