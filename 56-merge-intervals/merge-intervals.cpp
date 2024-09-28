class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });
        vector<vector<int>> res{};
        vector<int>& curr = intervals[0];
        for (const auto& interval : intervals) {
            if (interval[0] <= curr[1]) {
                curr[1] = max(interval[1], curr[1]);
            } else {
                res.push_back(curr);
                curr = interval;
            }
        }
        res.push_back(curr);
        return res;
    }

};