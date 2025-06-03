class Solution {
public:
    int maxCandies(vector<int>& status, vector<int>& candies, vector<vector<int>>& keys, vector<vector<int>>& containedBoxes, vector<int>& initialBoxes) {
        multiset<pair<int, int>> st;
        for (auto it:initialBoxes) st.insert({status[it], it});
        int ans=0;
        while (st.size()) {
            auto it=*st.rbegin();
            st.erase(it);
            if (!it.first) break;
            ans+=candies[it.second];
            for (auto i:keys[it.second]) {
                status[i]=1;
                if (st.count({0, i})) {
                    st.erase({0, i});
                    st.insert({1, i});
                }
            }
            for (auto i:containedBoxes[it.second]) {
                st.insert({status[i], i});
            }
        }

        return ans;
    }
};