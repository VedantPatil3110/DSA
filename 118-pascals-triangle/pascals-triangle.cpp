class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v;
        for(int i=0;i<numRows;i++){
            long long int ans=1;
            vector<int>temp;
            temp.push_back(ans);
            int j=1;
            while(j<=i){
                ans=ans*(i-j+1)/j;
                j++;
                temp.push_back(ans);
            }
            v.push_back(temp);
        }
        return v;
    }
};