class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int n = nums.size();
        // Use a min-heap to always get the smallest element
        priority_queue<pair<int, pair<int, int>>, 
                       vector<pair<int, pair<int, int>>>, 
                       greater<>> minheap;

        int maxval = INT_MIN;
        int rangeStart = 0, rangeEnd = INT_MAX;

        // Initialize heap with the first element of each list
        for (int i = 0; i < n; ++i) {
            minheap.push({nums[i][0], {i, 0}});
            maxval = max(maxval, nums[i][0]);
        }

        while (true) {
            auto top = minheap.top();
            minheap.pop();

            int minval = top.first;
            int row = top.second.first;
            int col = top.second.second;

            // Update the smallest range if found smaller
            if (maxval - minval < rangeEnd - rangeStart) {
                rangeStart = minval;
                rangeEnd = maxval;
            }

            // Move to next element in the list from which minval came
            if (col + 1 == nums[row].size()) {
                break;
            }

            int nextval = nums[row][col + 1];
            minheap.push({nextval, {row, col + 1}});
            maxval = max(maxval, nextval);
        }

        return {rangeStart, rangeEnd};
    }
};
