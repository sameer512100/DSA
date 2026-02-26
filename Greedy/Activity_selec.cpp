class Solution
{
public:
    static bool check(const vector<int> &a, const vector<int> &b)
    {
        return a[1] < b[1];
    }
    int activitySelection(vector<int> &start, vector<int> &finish)
    {
        // code here
        int n = start.size();
        vector<vector<int>> vec;
        for (int i = 0; i < n; i++)
        {
            vec.push_back({start[i], finish[i]});
        }
        sort(begin(vec), end(vec), check);
        int count = 1;
        int j = 0;
        for (int i = 1; i < vec.size(); i++)
        {
            if (vec[i][0] > vec[j][1])
            {
                count++;
                j = i;
            }
        }
        return count;
    }
};