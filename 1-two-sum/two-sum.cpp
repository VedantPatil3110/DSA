class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            int a=target-nums[i];
            if(m.find(a)!=m.end()){
                ans.push_back(i);
                ans.push_back(m[a]);
                break;
            }
            else{
                m[nums[i]]=i;
            }
        }
        return ans;
    }
};