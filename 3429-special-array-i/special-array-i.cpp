class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
     int n=nums.size();
     if(n==1){
        return true;
    }
    int i=0;
    int j=1;
    while(j<n){
        if((nums[i]+nums[j])%2==0){
            return false;
        }
        i++;
        j++;
    }
    return true;
    }
};