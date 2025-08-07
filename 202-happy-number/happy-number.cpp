class Solution {
public:
    bool isHappy(int n) {
        if(n==1 || n==7){
            return true;
        }
        if(n<10){
            return false;
        }
        int sum=0;
        while(n>0){
            int x=n%10;
            sum+=x*x;
            n/=10;
        }
        return isHappy(sum);
    }
};