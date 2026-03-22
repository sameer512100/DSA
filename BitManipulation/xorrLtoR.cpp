// 1st solution
// User function Template for C++

class Solution
{
public:
    int findXOR(int l, int r)
    {
        // complete the function here
        int ans = 0;
        for (int i = l; i <= r; i++)
        {
            ans = ans ^ i;
        }
        return ans;
    }
};

// 2nd solution
//  O(1) RUN TIME SOLN

class Solution
{
public:
    int ok(int n)
    {
        if (n % 4 == 1)
        {
            return 1;
        }
        if (n % 4 == 2)
        {
            return n + 1;
        }
        if (n % 4 == 3)
        {
            return 0;
        }
        if (n % 4 == 0)
        {
            return n;
        }
    }
    int findXOR(int l, int r)
    {
        return ok(l - 1) ^ ok(r); 
    }
};
/*

XORR OF [L,R]
=
EXAMPLE:
[4,7]
I BREAK THIS INTO
1-3 ^ 7 => (1^2^3) ^ (1^2^3^4^5^6^7) = > SAME NUMS GETS CANCELLED IN XORR SO WE WILL BE LEFT WITH=> 4^5^6^7 WHICH IS OUR ANS
*/