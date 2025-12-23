class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int ans=0;
        sort(boxTypes.begin(),boxTypes.end(),[](auto &a,auto &b){
            return a[1]>b[1];
        });
        for(auto x:boxTypes){
            int a=min(x[0],truckSize);
            ans+=a*x[1];
            truckSize-=a;
            if(truckSize==0){
                break;
            }
        }
        return ans;
    }
};