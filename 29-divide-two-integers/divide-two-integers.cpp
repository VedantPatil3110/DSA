class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==divisor){
            return 1;
        }
        // if(dividend==INT_MAX && divisor==-1){
        //     return INT_MIN;
        // }
        if(dividend==INT_MIN && divisor==-1){
            return INT_MAX;
        }
        if(divisor==1){
            return dividend;
        }
        if(divisor==-1){
            return -1*dividend;
        }
        int sign=1;
        if((dividend<0 && divisor>0)||(dividend>0 && divisor<0)){
            sign=-1;
        }
        int ans=0;
        long x=abs((long)dividend);
        long y=abs((long)divisor);
        while(y<=x){
            int count=0;
            while(x>=(y<<(count+1))){
                count++;
            }
            ans+=(1<<count);
            x-=(y*(1<<count));
        }
        return ans*sign;
    }
};