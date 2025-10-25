class Solution {
public:
    int totalMoney(int n) {
        int ans=0;
        int count=0;
        int mon=0;
        for(int i=1;i<=n;i++){
            if(count==7){
                mon=i/7+1;
                count=0;
            }
            else{
                mon++;
            }
            ans+=mon;
            count++;
        }
        return ans;
    }
};