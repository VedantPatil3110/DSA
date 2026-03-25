class Solution {
  public:
    void bitManipulation(int n, int i) {
        int get,set,clear;
        get=((n>>i-1)&1);
        set=(n|(1<<i-1));
        clear=(n&~(1<<i-1));
        cout<<get<<" "<<set<<" "<<clear;
    }
};