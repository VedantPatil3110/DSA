class Solution {
public:
bool cz(int n){
    while(n>0){
        if(n%10==0){
            return true;
        }
        n=n/10;
    }
    return false;
}
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1;i<n;i++){
            int l=i;
            int r=n-i;
            if(!cz(l) && !cz(r)){
                return {l,r};
            }
        }
        return {};
    }
};