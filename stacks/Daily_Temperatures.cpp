#include <bits/stdc++.h>
using namespace std;

/*
Given an array of integers temperatures represents the daily temperatures, return an array answer such that answer[i] is the number of days you have to wait after the ith day to get a warmer temperature. If there is no future day for which this is possible, keep answer[i] == 0 instead.



Example 1:

Input: temperatures = [73,74,75,71,69,72,76,73]
Output: [1,1,4,2,1,1,0,0]

*/

class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        int n = temperatures.size();
        stack<int> st; // stores indices
        vector<int> ans(n, 0);

        for (int i = n - 1; i >= 0; i--)
        {
            // pop all temperatures <= current
            while (!st.empty() && temperatures[i] >= temperatures[st.top()])
            {
                st.pop();
            }

            if (!st.empty())
            {
                ans[i] = st.top() - i;
            }

            st.push(i);
        }
        return ans;
    }
};

int main()
{
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    vector<int> temperatures(n);
    cout << "Enter temperatures: ";
    for (int i = 0; i < n; i++)
    {
        cin >> temperatures[i];
    }

    Solution sol;
    vector<int> result = sol.dailyTemperatures(temperatures);

    cout << "Days until warmer temperature: ";
    for (int x : result)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
