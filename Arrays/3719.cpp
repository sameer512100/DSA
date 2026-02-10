class Solution
{
public:
    int longestBalanced(vector<int> &nums)
    {
        int n = nums.size();
        int len = 0;
        for (int i = 0; i < n; i++)
        {
            unordered_map<int, int> odd;
            unordered_map<int, int> eve;
            for (int j = i; j < n; j++)
            {
                if (nums[j] % 2 != 0)
                {
                    odd[nums[j]]++;
                }
                else
                {
                    eve[nums[j]]++;
                }

                if (odd.size() == eve.size())
                {
                    len = max(len, j - i + 1);
                }
            }
        }
        return len;
    }
};