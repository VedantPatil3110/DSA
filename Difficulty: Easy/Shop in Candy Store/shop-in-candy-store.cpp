class Solution {
  public:
    vector<int> candyStore(int candies[], int N, int K) {
        int n=N;
        if(K==0){
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=candies[i];
            }
            return {sum,sum};
        }
        sort(candies,candies+n);
        if(K==n-1){
            return {candies[0],candies[n-1]};
        }
        int mini=0;
        int maxi=0;
        int i=0;
        int j=n-1;
        while(i<=j){
            mini+=candies[i];
            i++;
            j-=K;
        }
        i=n-1;
        j=0;
        while(i>=j){
            maxi+=candies[i];
            i--;
            j+=K;
        }
        return {mini,maxi};
    }
};