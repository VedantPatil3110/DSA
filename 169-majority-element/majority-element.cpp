class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int can=0;
        int count=0;
        for(auto num:nums){
            if(count==0){
                can=num;
            }
            if(can==num){
                count++;
            }
            else{
                count--;
            }
        }
        return can;
    }
};