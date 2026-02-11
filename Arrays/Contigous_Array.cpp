class Solution
{
public:
    int findMaxLength(vector<int> &nums)
    {
        int n = nums.size();
        unordered_map<int, int> mpp;
        int maxi = 0, curr = 0;
        mpp[0] = -1;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                curr += -1;
            }
            else
            {
                curr += 1;
            }
            if (mpp.find(curr) != mpp.end())
            {
                maxi = max(maxi, i - mpp[curr]);
            }
            else
            {
                mpp[curr] = i;
            }
        }
        return maxi;
    }
};