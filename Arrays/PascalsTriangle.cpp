class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> vec(numRows);
        for (int i = 0; i < numRows; i++)
        {
            vec[i] = vector<int>(i + 1, 1);
            for (int j = 1; j < i; j++)
            {
                vec[i][j] = vec[i - 1][j] + vec[i - 1][j - 1];
            }
        }
        return vec;
    }
};