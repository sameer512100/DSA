class Solution {
public:
    int minOperations(string s) {
        int n = s.length();
        int c1=0,c2=0;
        for(int i=0;i<n;i++){
            char one = (i%2==0)?'1':'0';
            char two = (i%2==0)?'0':'1';
            if(s[i]!=one){
                c1++;
            }
            if(s[i]!=two){
                c2++;
            }
        }
        return min(c1,c2);
    }
};