class Solution {
public:
    bool hasAlternatingBits(int n) {
        if(n==0){
            return 0;
        }
        int lsb = n&1;
        n>>=1;
        while(n>0){
            int curr = n&1;
            if(curr==lsb){
                return false;
            }
            lsb = curr;
            n>>=1;
        }
        return 1;
    }
};