/* FROM WEEKLY CONTEST 490 */
// 3849 problem
class Solution
{
public:
    string maximumXor(string s, string t)
    {
        int n = s.size();
        int cnt0 = 0, cnt1 = 0;
        for (char c : t)
        {
            if (c == '0')
            {
                cnt0++;
            }
            else
            {
                cnt1++;
            }
        }
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (cnt1 > 0)
                {
                    ans += '1';
                    cnt1--;
                }
                else
                {
                    ans += '0';
                    cnt0--;
                }
            }
            else
            {
                if (cnt0 > 0)
                {
                    ans += '1';
                    cnt0--;
                }
                else
                {
                    ans += '0';
                    cnt1--;
                }
            }
        }
        return ans;
    }
};