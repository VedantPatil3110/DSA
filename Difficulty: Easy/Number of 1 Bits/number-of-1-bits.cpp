class Solution {
  public:
    int setBits(int n) {
        int count=0;
        while(n>0){
            int ld=n%2;
            count+=ld;
            n/=2;
        }
        return count;
    }
};