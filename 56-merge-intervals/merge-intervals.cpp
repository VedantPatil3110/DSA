class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int start=intervals[0][0];
        int end=intervals[0][1];
        vector<int>v;
        vector<vector<int>>ans;
        for(int i=1;i<intervals.size();i++){
            if(end>=intervals[i][0]){
                end=max(end,intervals[i][1]);
            }
            else{
                v.push_back(start);
                v.push_back(end);
                ans.push_back(v);
                v.clear();
                start=intervals[i][0];
                end=intervals[i][1];
            }
        }
        v.push_back(start);
        v.push_back(end);
        ans.push_back(v);
        return ans;
    }
};