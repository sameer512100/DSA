class Solution
{
public:
    int firstStableIndex(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> maxi(n);
        vector<int> mini(n);
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, nums[i]);
            maxi[i] = ans;
        }
        ans = INT_MAX;
        for (int i = n - 1; i >= 0; i--)
        {
            ans = min(ans, nums[i]);
            mini[i] = ans;
        }
        for (int i = 0; i < n; i++)
        {
            if (maxi[i] - mini[i] <= k)
            {
                return i;
            }
        }
        return -1;
    }
};