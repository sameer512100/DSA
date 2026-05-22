class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> vec;
        unordered_map<string,vector<string>> mpp;
        for(string s : strs){
            string key = s;
            sort(begin(key),end(key));
            mpp[key].push_back(s);
        }
        for(auto it : mpp){
            vec.push_back(it.second);
        }
        return vec;
    }
};