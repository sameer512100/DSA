class Solution
{
public:
    void ok(int idx, vector<int> &nums, int target, vector<vector<int>> &vec, vector<int> &temp, int n)
    {
        if (idx == n)
        {
            if (target == 0)
            {
                vec.push_back(temp);
            }
            return;
        }
        if (nums[idx] <= target)
        {
            temp.push_back(nums[idx]);
            ok(idx, nums, target - nums[idx], vec, temp, n);
            temp.pop_back();
        }
        ok(idx + 1, nums, target, vec, temp, n);
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        int n = candidates.size();
        vector<int> temp;
        vector<vector<int>> vec;
        ok(0, candidates, target, vec, temp, n);
        return vec;
    }
};