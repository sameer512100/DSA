#include<bits/stdc++.h>
using namespace std;

/*
Given an array of characters chars, compress it using the following algorithm:

Begin with an empty string s. For each group of consecutive repeating characters in chars:

If the group's length is 1, append the character to s.
Otherwise, append the character followed by the group's length.
The compressed string s should not be returned separately, but instead, be stored in the input character array chars. Note that group lengths that are 10 or longer will be split into multiple characters in chars.

After you are done modifying the input array, return the new length of the array.

You must write an algorithm that uses only constant extra space.

Note: The characters in the array beyond the returned length do not matter and should be ignored.
*/


// EXAMPLE

/*

Example 1:

Input: chars = ["a","a","b","b","c","c","c"]
Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".
Example 2:

Input: chars = ["a"]
Output: Return 1, and the first character of the input array should be: ["a"]
Explanation: The only group is "a", which remains uncompressed since it's a single character.
Example 3:

Input: chars = ["a","b","b","b","b","b","b","b","b","b","b","b","b"]
Output: Return 4, and the first 4 characters of the input array should be: ["a","b","1","2"].
Explanation: The groups are "a" and "bbbbbbbbbbbb". This compresses to "ab12".


*/

int main() {
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;

    vector<char> chars(n);
    cout << "Enter characters one by one nigg: ";
    for (int i = 0; i < n; i++)
    {
        cin >> chars[i];
    }

    int i = 0, index = 0;

    while (i < n)
    {
        char curr_char = chars[i];
        int count = 0;

        // count consecutive characters
        while (i < n && chars[i] == curr_char)
        {
            i++;
            count++;
        }

        // store the character
        chars[index++] = curr_char;

        // store count if greater than 1
        if (count > 1)
        {
            string cnt = to_string(count);
            for (char c : cnt)
            {
                chars[index++] = c;
            }
        }
    }

    // output compressed result
    cout << "Compressed length: " << index << endl;
    cout << "Compressed characters: ";
    for (int i = 0; i < index; i++)
    {
        cout << chars[i] << " ";
    }
    return 0;
}