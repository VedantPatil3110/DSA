class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set<float>s;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        while(i<=j){
            float a=(nums[i]+nums[j])/2.0;
            s.insert(a);
            i++;
            j--;
        }
        return s.size();
    }
};