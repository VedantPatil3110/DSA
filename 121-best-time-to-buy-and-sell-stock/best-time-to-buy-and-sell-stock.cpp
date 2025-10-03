class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int cp=prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]<cp){
                cp=prices[i];
            }
            profit=max(profit,prices[i]-cp);
        }
        return profit;
    }
};