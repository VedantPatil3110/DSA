class Solution {
public:
bool solve(int x){
    vector<int>count(10,0);
    while(x>0){
        int idx=x%10;
        count[idx]++;
        x/=10;
    }
    for(int i=0;i<10;i++){
        if(count[i]>0 && count[i]!=i){
            return false;
        }
    }
    return true;
}
    int nextBeautifulNumber(int n) {
        for(int i=n+1;i<=1224444;i++){
            if(solve(i)){
                return i;
            }
        }
        return -1;
    }
};