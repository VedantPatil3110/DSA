class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        unordered_set<long long>s;
        for(int i=0;i<arr.size();i++){
            s.insert(arr[i]*arr[i]*1LL);
        }
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                long long a=1LL*arr[i]*arr[i]+1LL*arr[j]*arr[j];
                if(s.find(a)!=s.end()){
                    return true;
                }
            }
        }
        return false;
    }
};