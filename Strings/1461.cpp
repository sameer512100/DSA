class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string> st;
        int n = s.length();
        int codes = pow(2,k);
        for(int i=k;i<=n;i++){
            string x = s.substr(i-k,k);
            if(!st.count(x)){
                st.insert(x);
                codes--;
            }
        }
        return codes==0;
    }
};