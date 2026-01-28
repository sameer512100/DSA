class Solution
{
public:
    string intToRoman(int num)
    {
        string ans = "";
        vector<int> val = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string> sym = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        for (int i = 0; i < 13; i++)
        {
            if (num == 0)
            {
                break;
            }
            int time = num / val[i];
            for (int j = 0; j < time; j++)
            {
                ans += sym[i];
            }
            num = num % val[i];
        }
        return ans;
    }
};