
// O(LOG N ) APPROACH
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int n = nums.size();
        if (nums.empty())
        {
            return 0;
        }
        sort(begin(nums), end(nums));
        int res = 1, count = 1;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] == nums[i - 1])
            {
                continue;
            }
            if (nums[i] == nums[i - 1] + 1)
            {
                count++;
            }
            else
            {
                count = 1;
            }
            res = max(res, count);
        }
        return res;
    }
};

// OPTIMAL APPROACH
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int n = nums.size();
        if(n<=0){
            return 0;
        }
        unordered_set<int> st;
        for(int n : nums){
            st.insert(n);
        }
        int res=0;
        for(int n : nums){
            if(st.find(n)!=st.end() && st.find(n-1)==st.end()){
                int curr=n,count=0;
                while(st.find(curr)!=st.end()){
                    st.erase(curr);
                    curr++;
                    count++;
                }
                res = max(res,count);
            }
        }
        return res;
    }
};