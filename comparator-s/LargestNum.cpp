#include<bits/stdc++.h>
using namespace std;

/*

Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.

Since the result may be very large, so you need to return a string instead of an integer.



Example 1:

Input: nums = [10,2]
Output: "210"
Example 2:

Input: nums = [3,30,34,5,9]
Output: "9534330"



*/

string largestNumber(vector<int> &nums)
{
    auto myComparator = [](int &a, int &b)
    {
        string one = to_string(a);
        string two = to_string(b);
        return one + two > two + one;
    };
    sort(begin(nums), end(nums), myComparator);
    if (nums[0] == 0)
    {
        return "0";
    }
    string k = "";
    for (int n : nums)
    {
        string hm = to_string(n);
        k += hm;
    }
    return k;
}

int main() {
    vector<int> nums = {3, 30, 34, 5, 9};
    cout << largestNumber(nums) << endl;
    return 0;
}