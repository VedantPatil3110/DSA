class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0 || k%5==0){
            return -1;
        }
        int n=1%k;
        int ans=1;
        while(n>0){
            n=((n*10)+1)%k;
            ans++;
            if(ans>k){
                return -1;
            }
        }
        return ans;
    }
};