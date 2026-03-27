class Solution {
public:
    int minBitFlips(int start, int goal) {
        int freaky=start^goal;
        int ans=0;
        while(freaky>0){
            ans+=freaky & 1;
            freaky=freaky>>1;
        }
        return ans;
    }
};