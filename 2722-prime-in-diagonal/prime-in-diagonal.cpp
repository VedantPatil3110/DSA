class Solution {
public:
bool prime(int x){
    if(x==1){
        return false;
    }
    if(x==2){
        return true;
    }
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
    int diagonalPrime(vector<vector<int>>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[0].size();j++){
                if(i==j || i+j==nums.size()-1){
                    if(prime(nums[i][j])){
                        ans=max(ans,nums[i][j]);
                    }
                }
            }
        }
        return ans;
    }
};