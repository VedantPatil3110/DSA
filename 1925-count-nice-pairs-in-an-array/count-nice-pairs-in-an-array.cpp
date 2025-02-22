class Solution {
public:
int rev(int n){
    int r=0;
    while(n>0){
        r*=10;
        r+=n%10;
        n/=10;
    }
    return r;
}
// int fact(int n){
//     int fact=1;
//     for(int i=2;i<=n;i++){
//         fact*=i;
//     }
//     return fact;
// }
// int combi(int n,int r){
//     return (fact(n)) / (fact(r)*fact(n-r));
// }
    int countNicePairs(vector<int>& nums) {
        int si=nums.size();
        int count=0;
        unordered_map<int,int>m;
        for(int i=0;i<si;i++){
            nums[i]-=rev(nums[i]);
        }
        for(int i=0;i<si;i++){
            if(m.find(nums[i])!=m.end()){
                count%=1000000007;
                count+= m[nums[i]];
                m[nums[i]]++;
            }
            else m[nums[i]]++;
        }
        // for(auto x:m){
        //     // int f=x.second;
        //     // count+=combi(f,2);
        // }
        return count%1000000007;
    }
};