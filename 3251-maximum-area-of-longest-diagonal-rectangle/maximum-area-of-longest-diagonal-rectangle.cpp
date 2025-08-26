class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxi=0;
        int ans=0;
        for(int i=0;i<dimensions.size();i++){
            int a =dimensions[i][0];
            int b =dimensions[i][1];
            int c=a*a+b*b;
            int temp=a*b;
            if(c>maxi){
                maxi=c;
                ans=temp;
            }
            else if(maxi==c && temp>ans){
                ans=temp;
            }
        }
        return ans;
    }
};