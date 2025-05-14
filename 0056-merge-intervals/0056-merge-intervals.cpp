class Solution {
public:

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // Step 1: Sort the intervals by start time
        sort(intervals.begin(), intervals.end());
        
        vector<vector<int>> merged;

        // Step 2: Traverse using traditional for loop
        int n = intervals.size();
        for (int i = 0; i < n; i++) {
            // If merged is empty OR current interval doesn't overlap with last one in merged
            if (merged.empty() || merged.back()[1] < intervals[i][0]) {
                merged.push_back(intervals[i]);
            } else {
                // There is overlap, so merge
                merged.back()[1] = max(merged.back()[1], intervals[i][1]);
            }
        }

        return merged;
    }
};
