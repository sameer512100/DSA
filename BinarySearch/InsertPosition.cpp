/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.



Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4



sameer ga basic ga chudu
number ekkada pettalo vethakaali anthey
so bsic ga enti
array elago sorted ee untadhi
manam em cheyyali 
manaki ichina number kante peddhaga/equal unna budda index kanukkovaali
ante basic ga
WHERE IS THE SMALLEST INDEX WHERE NUMS[I] >= TARGET

*/

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int n = nums.size();
        int low = 0, high = n - 1;
        int ans = n;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] >= target)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};