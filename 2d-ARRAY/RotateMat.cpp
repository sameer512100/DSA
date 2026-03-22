class Solution
{
public:
    void rotate(vector<vector<int>> &vec)
    {
        int n = vec.size();
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                swap(vec[i][j], vec[j][i]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            reverse(begin(vec[i]), end(vec[i]));
        }
    }
};