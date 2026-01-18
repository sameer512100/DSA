#include <bits/stdc++.h>
using namespace std;

/*
Given an array arr[] of size n containing integers, the task is to find the length of the longest subarray having sum equal to the given value k.

Note: If there is no subarray with sum equal to k, return 0.
*/

int main()
{
    cout << "enter the number of values in the array : ";
    int n;
    cin >> n;
    cout << "Enter the value of K : ";
    int k;
    cin >> k;
    cout << "Enter the elements of the array : ";
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    int i = 0, j = 0, sum = 0, length = 0;
    while (j < vec.size())
    {
        sum += vec[j];
        if (sum > k)
        {
            while (sum > k)
            {
                sum -= vec[i];
                i++;
            }
        }
        if (sum == k)
        {
            length = max(length, j - i + 1);
        }
        j++;
    }
    cout << "The longest subarray with sum k length is : " << length << " ";
    return 0;
}