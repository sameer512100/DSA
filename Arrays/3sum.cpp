#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> result;
    void twoSum(vector<int> &nums, int target, int i, int j)
    {
        while (i < j)
        {
            int sum = nums[i] + nums[j];
            if (sum > target)
            {
                j--;
            }
            else if (sum < target)
            {
                i++;
            }
            else
            {
                // remove duplicates first
                while (i < j && nums[i] == nums[i + 1])
                {
                    i++;
                }
                while (i < j && nums[j] == nums[j - 1])
                {
                    j--;
                }
                result.push_back({-target, nums[i], nums[j]});
                i++;
                j--;
            }
        }
    }
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        if (nums.size() < 3)
        {
            return {};
        }
        result.clear();
        int n = nums.size();
        sort(begin(nums), end(nums));
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            // fixing one element
            /*
            easy => ( 0 = N1+N2+N3 ) => OUR GOAL
            WE TAKE ONE ELEM
            & search for other 2 elems which gives -N1 ( N2+N3 = -N1 )
            */
            int n1 = nums[i];
            int target = -n1;
            twoSum(nums, target, i + 1, n - 1);
        }
        return result;
    }
};

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    Solution sol;
    vector<vector<int>> result = sol.threeSum(nums);

    for (auto& triplet : result) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << "\n";
    }

    return 0;
}
