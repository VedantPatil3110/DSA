class Solution {
  public:
    bool checkKthBit(int n, int k) {
        if(((n>>k)&1)==1){
            return true;
        }
        else{
            return 0;
        }
    }
};