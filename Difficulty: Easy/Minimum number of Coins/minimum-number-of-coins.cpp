// User function Template for C++

class Solution {
  public:
    vector<int> minPartition(int N) {
        vector<int>coins({ 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 });
        int i=coins.size()-1;
        vector<int>ans;
        while(i>=0){
            if(coins[i]>N){
                i--;
            }
            else{
                ans.push_back(coins[i]);
                N-=coins[i];
            }
        }
        return ans;
    }
};