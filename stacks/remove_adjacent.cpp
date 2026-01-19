#include<bits/stdc++.h>
using namespace std;

/*

You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.

We repeatedly make duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.



Example 1:

Input: s = "abbaca"
Output: "ca"
Explanation:
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
*/

string removeDuplicates(string s)
{
    stack<char> st;
    int i = 0;
    while (i < s.length())
    {
        if (st.empty() || st.top() != s[i])
        {
            st.push(s[i]);
        }
        else if (st.top() == s[i])
        {
            st.pop();
        }
        i++;
    }
    string res = "";
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    
    return 0;
}