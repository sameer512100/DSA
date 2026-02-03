class Solution
{
public:
    void ok(int idx, int s, vector<int> &arr, vector<int> &vec, int n)
    {
        if (idx == n)
        {
            vec.push_back(s);
            return;
        }

        // pick
        ok(idx + 1, s + arr[idx], arr, vec, n);

        // not pick
        ok(idx + 1, s, arr, vec, n);
    }

    vector<int> subsetSums(vector<int> &nums)
    {
        vector<int> vec;
        int n = nums.size();

        ok(0, 0, nums, vec, n);
        sort(vec.begin(), vec.end());

        return vec;
    }
};
