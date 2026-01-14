class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>prevrow;
        for(int i=0;i<rowIndex+1;i++){
            vector<int>curr(i+1,1);
            for(int j=1;j<i;j++){
                curr[j]=prevrow[j-1]+prevrow[j];
            }
            prevrow=curr;
        }
        return prevrow;
    }
};