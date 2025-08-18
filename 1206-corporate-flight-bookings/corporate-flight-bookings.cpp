class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>ans(n,0);
        int ni=bookings.size();
        for(int i=0;i<ni;i++){
            int a=bookings[i][0];
            int b=bookings[i][1];
            int c=bookings[i][2];
            for(int j=a-1;j<b;j++){
                ans[j]+=c;
            }
        }
        return ans;
    }
};