class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        vector<int>prevrow;
        for(int i=0;i<numRows;i++){
            vector<int>currrows(i+1,1);
            for(int j=1;j<i;j++){
                currrows[j]=prevrow[j-1]+prevrow[j];
            }
            ans.push_back(currrows);
            prevrow=currrows;
        }
        return ans;
    }
};