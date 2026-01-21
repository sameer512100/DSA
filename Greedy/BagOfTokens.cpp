#include<bits/stdc++.h>
using namespace std;

/*

You start with an initial power of power, an initial score of 0, and a bag of tokens given as an integer array tokens, where each tokens[i] denotes the value of tokeni.

Your goal is to maximize the total score by strategically playing these tokens. In one move, you can play an unplayed token in one of the two ways (but not both for the same token):

Face-up: If your current power is at least tokens[i], you may play tokeni, losing tokens[i] power and gaining 1 score.
Face-down: If your current score is at least 1, you may play tokeni, gaining tokens[i] power and losing 1 score.
Return the maximum possible score you can achieve after playing any number of tokens.
*/


/*

KEY IDEA = SORT CHESKO
LAST LO HIGH VALUES UNTAI
SO EPPUDAINA POWER SARIPOLEDHU ANUKO SCORE PENCHADAANKI
HIGHEST POWER EE THEESKO KADHA, APPUDU BEST RESULT OSTADHI
ANDHUKE SORT CHESI
2 POINTERS PETKUNNAM

*/

int bagOfTokensScore(vector<int> &tokens, int power)
{
    int n = tokens.size();
    sort(begin(tokens),end(tokens));
    int i=0,j=n-1;
    int score=0,maxi=0;
    while(i<=j){
        if(power>=tokens[i]){
            power-=tokens[i];
            score++;
            i++;
            maxi = max(maxi,score);
        }
        else if(score>=1){
            power+=tokens[j];
            j--;
            score--;
        }
        else{
            return maxi;
        }
    }
    return maxi;
}

int main() {
    
    return 0;
}