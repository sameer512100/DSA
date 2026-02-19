/* VERY GOOD 2 POINTER QUESTION */
class Solution {
public:
    int countBinarySubstrings(string s) {
        int n = s.length();
        int prev=0,curr=1,count=0;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                curr++;
            }else{
                count+=min(curr,prev);
                prev = curr;
                curr=1;
            }
        }
        return count+min(curr,prev);
    }
};