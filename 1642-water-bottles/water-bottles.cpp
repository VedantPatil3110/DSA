class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int remain=0;
        int ans=numBottles;
        while(numBottles>=numExchange){
            remain=numBottles%numExchange;
            ans+=numBottles/numExchange;
            numBottles=(numBottles/numExchange)+remain;
        }
        return ans;
    }
};