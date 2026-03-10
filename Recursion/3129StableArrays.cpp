class Solution {
public:
const int MOD = 1e9+7;
int t[201][201][2];

int solve(int zerosLeft,int onesLeft,bool isOne,int limit){
    if(zerosLeft==0 && onesLeft==0) return 1;

    if(t[zerosLeft][onesLeft][isOne]!=-1)
        return t[zerosLeft][onesLeft][isOne];

    int res=0;

    if(isOne){ 
        for(int i=1;i<=min(zerosLeft,limit);i++){
            res = (res + solve(zerosLeft-i,onesLeft,false,limit))%MOD;
        }
    }
    else{ 
        for(int i=1;i<=min(onesLeft,limit);i++){
            res = (res + solve(zerosLeft,onesLeft-i,true,limit))%MOD;
        }
    }

    return t[zerosLeft][onesLeft][isOne] = res;
}

int numberOfStableArrays(int zero, int one, int limit) {
    memset(t,-1,sizeof(t));

    int startwithOne = solve(zero,one,false,limit);
    int startwithZero = solve(zero,one,true,limit);

    return (startwithOne + startwithZero)%MOD;
}
};

/* A GODAMN GOOD QUESTION !! */