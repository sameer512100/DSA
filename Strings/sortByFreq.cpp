class Solution
{
public:
    string frequencySort(string s)
    {
        // hash elems
        unordered_map<char, int> mpp;
        for (char c : s)
        {
            mpp[c]++;
        }
        int n = s.length();
        // vector to store chars with their freq
        // max frequency can be length of string, so n+1 is vector
        vector<vector<char>> vec(n + 1);
        for (auto it : mpp)
        {
            char x = it.first;
            int freq = it.second;
            vec[freq].push_back(x);
        }
        string res = "";
        // from max freq to 0, if we at maxfreq, see what chars are present in vec and append them thats it
        for (int i = n; i >= 0; i--)
        {
            for (char c : vec[i])
            {
                res.append(i, c);
            }
        }
        return res;
    }
};