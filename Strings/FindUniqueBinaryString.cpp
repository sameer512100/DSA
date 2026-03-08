// APPROACH 1
/*

SO WE ARE GIVEN A VECTOR OF LENGTH N AND EACH ELEMENT IN THE STRING VECTOR IS OF LENGTH N
EXAMPLE:
VEC = ["00","11"]
SO WE HAVE TO RETURN A STRING OF LENGTH WHICH IS NOT IN THE ARRAY
EXAMPLE ANS FOR ABOVE VEC : 01

INTUITION:
SO THESE ARE BINARY NUMBER RIGHT
LIKE
00 => 0
11 => 3

SO WHAT WE CAN DO IS TO TAKE A SET, CONVERT THE EACH STRING INTO NUMBER AND PUT IT IN SET
NOW ITERATE FROM 0 THROUGH N
WHY N?
for example, lets say N = 3
AND LETS CHECK FROM 0
SO 0,1,2,3
ARRAY SIZE IS OF 3 BUT WE ARE CHECKING 4 NUMBERS ALREADY
SO WE'D DEFINITELY FIND MISSING NIGGER FROM THE ARRAY

ANOTHER EXAMPLE OF WHY N?
N = 5
VEC = ["","","","",""]
WE LOOK FROM 0,1,2,3,4,5,6
WE MAKING 7 CHECKS
SO WE WILL FIND DEFINITELY

SIMPLY  RETURN IT

LEARNT : BITSET<NUMBER OF BITS>(NUM) => GIVES BINARY FORMAT OF NUM


*/

class Solution
{
public:
    string findDifferentBinaryString(vector<string> &nums)
    {
        int n = nums.size();
        set<int> st;

        for (string s : nums)
        {
            int x = stoi(s, nullptr, 2);
            st.insert(x);
        }

        for (int i = 0; i <= n; i++)
        {
            if (st.find(i) == st.end())
            {
                string temp = bitset<16>(i).to_string();
                return temp.substr(16 - n, n);
            }
        }

        return "";
    }
};









// APPROACH 2
/*

LMAO, GOOD APPROACH
SUPPOSE 
VEC = ["111","011","001"]
RES = ""
NOW TAKE STRING 1,AND STRING 1'S 0TH CHAR
ITS 1, SO I APPEND 0 TO RES
SO IT'LL BE LIKE THIS:
111
RES = "0"
NOW 0 _ _!= 111, AS THE FIRST CHARACTER ITSELF IS DIFFERING
SO WE MOVE TO 2ND STRING
011
RES+=0, RES = 00
01_!=011

NOW 3RD STRING
001
RES+=0
000!=001
AND RES = 000 IS UNIQUE

*/

class Solution
{
public:
    string findDifferentBinaryString(vector<string> &nums)
    {
        int n = nums.size();
        string res = "";
        for (int i = 0; i < n; i++)
        {
            char x = nums[i][i];
            if (x == '1')
            {
                res += '0';
            }
            else
            {
                res += '1';
            }
        }
        return res;
    }
};