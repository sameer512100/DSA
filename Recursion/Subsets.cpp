/*


78. Subsets

Given an integer array nums of unique elements, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.



Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Example 2:

Input: nums = [0]
Output: [[],[0]]


*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void ok(int idx, vector<int> &nums, vector<vector<int>> &vec,
            vector<int> &temp, int n)
    {
        if (idx == n)
        {
            vec.push_back(temp);
            return;
        }

        // Take current element
        temp.push_back(nums[idx]);
        ok(idx + 1, nums, vec, temp, n);

        // Not take current element
        temp.pop_back();
        ok(idx + 1, nums, vec, temp, n);
    }

    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> vec;
        vector<int> temp;
        ok(0, nums, vec, temp, nums.size());
        return vec;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> result = sol.subsets(nums);

    for (auto &subset : result)
    {
        cout << "[";
        for (int i = 0; i < subset.size(); i++)
        {
            cout << subset[i];
            if (i < subset.size() - 1)
                cout << ",";
        }
        cout << "] ";
    }
    cout << endl;

    return 0;
}
