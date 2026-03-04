class Solution
{
public:
    long long timer(vector<int> &piles, int hourly)
    {
        long long ans = 0;
        for (int i = 0; i < piles.size(); i++)
        {
            ans += (long long)(piles[i] + hourly - 1) / hourly;
        }
        return ans;
    }
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int left = 1, right = *max_element(begin(piles), end(piles)); /*=> minimum 1 banana, maximum largest number in piles*/
        int res = right;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            long long time = timer(piles, mid);
            if (time <= h)
            {
                res = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return res;
    }
};