

class Solution {
  public:
    long long countSubArrayProductLessThanK(const vector<int>& arr, int n,long long k) {
        if(k<0){
            return 0;
        }
        long long ans=0;
        long long product=1;
        int i=0;
        for(int j=0;j<arr.size();j++){
            product*=arr[j];
            while(i<=j && product>=k){
                product/=arr[i];
                i++;
            }
            ans+=(j-i+1);
        }
        return ans;
    }
};