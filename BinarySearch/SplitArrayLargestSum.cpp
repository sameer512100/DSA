class Solution
{
public:
    bool pos(vector<int> &arr, int ok, int k)
    {
        int count = 1;
        int sum = 0;
        for (int n : arr)
        {
            if (sum + n > ok)
            {
                count++;
                sum = n;
            }
            else
            {
                sum += n;
            }
        }
        return count <= k;
    }
    int splitArray(vector<int> &nums, int k)
    {
        int n = nums.size();
        if (n < k)
        {
            return 0;
        }
        int mini = *max_element(begin(nums), end(nums));
        /*
        LOW POINTER = MAXI ELEMENT IN ARRAY BECAUSE,
        WHEN WE SPLIT
        WE WILL DEFINITELY HAVE LARGEST ELEMENT IN ONE OF THE SUBARRAY...
        SEARCH SPACE = {LARGEST_ELEMENT,..........,SUM_OF_ELEMENTS}
        */
        int maxi = 0;
        for (int n : nums)
        {
            maxi += n;
        }
        int res = 0;
        int low = mini, high = maxi;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (pos(nums, mid, k))
            {
                res = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return res;
    }
};


/*

BINARY SEARCH CHESI
INKO FUNCTION USE CHESI
ENNI SUBBARRAYS FORM AVTHUNNAI, NENU EE SUM THEESKUNTE ANI CHUSTHUNNAM anthey


*/