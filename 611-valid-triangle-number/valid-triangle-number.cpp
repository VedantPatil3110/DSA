class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        //side1+side2>side3
        // hello gay nigga 
        sort(nums.begin(),nums.end());
        int count=0;
        for(int i=nums.size()-1;i>=2;i--){
            int l=0;
            int h=i-1;
            while(l<h){
                if(nums[l]+nums[h]>nums[i]){
                    count+=h-l;
                    h--;
                }
                else{
                    l++;
                }
            }
        }
        return count;
    }
};