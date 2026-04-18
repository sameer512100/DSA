// BRUTE
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        sort(begin(intervals), end(intervals));
        vector<vector<int>> vec;
        vector<int> ans = intervals[0];
        for (int i = 1; i < intervals.size(); i++)
        {
            int x = intervals[i][0];
            int y = intervals[i][1];
            if (x <= ans[1])
            {
                ans[1] = max(ans[1], y);
            }
            else
            {
                vec.push_back(ans);
                ans = intervals[i];
            }
        }
        vec.push_back(ans);
        return vec;
    }
};