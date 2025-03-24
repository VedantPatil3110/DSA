class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        int count=(meetings[0][1]-meetings[0][0])+1;
        int maxi=meetings[0][1];
        for(int i=1;i<meetings.size();i++){
            if(meetings[i][0]<=maxi){
                if(meetings[i][1]>maxi){
                    count+=(meetings[i][1]-maxi);
                    maxi=meetings[i][1];
                }
                else{
                    maxi=max(maxi,meetings[i][1]);
                }
            }
            else{
                count+=(meetings[i][1]-meetings[i][0])+1;
                maxi=meetings[i][1];
            }
        }
        return days-count;
    }
};