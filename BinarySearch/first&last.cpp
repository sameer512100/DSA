/* given an array and target, find first & last occurence of it => we do bs in left space and right space separately*/


class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> ans(2, -1);
        int n = nums.size();
        int left = 0, right = n - 1;
        // so one iteration is to search in the left space after finding target
        // right = mid-1 => search in left space i.e., first occ
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
            {
                ans[0] = mid;
                right = mid - 1;
            }
            else if (nums[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        left = 0;
        right = n - 1;
        // next to find in the right space
        // left = mid+1 => last occ
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
            {
                ans[1] = mid;
                left = mid + 1;
            }
            else if (nums[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return ans;
    }
};