class Solution
{
public:
    int concatenatedBinary(int n)
    {
        const int M = 1e9 + 7;
        long long res = 0;
        int i = 1;
        while (i <= n)
        {
            int size = log2(i) + 1;
            res = ((res << size) % M + i) % M;
            i++;
        }
        return (int)res;
    }
};