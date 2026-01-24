#include<bits/stdc++.h>
using namespace std;


/*

MAIN POINT ENTI ANTE
OKAVELA EDHAINA ELEMENT GANAKA ARRAY LO SAGAM KANTE EKKUVA UNDHI ANUKO
ADHI CANCEL AVVADHU KADHA...
ANTE SUPPOSE ARRAY LENGTH 6 ANUKO
OKAVELA EDHAINA ELEMENT 
3 IS SAGAM, SO 4 TIMES APPEAR AYINDHI ANUKO
MIGATHA ELEMS OCCURENCES IS SMALL
SO BASIC GA EM LEDHU
ARRAY MEEDHA ITERATE CHEY
1ST ELEMENT EE NEE MAJORITY ANUKO
SAME ELEMENT ANUKO, COUNT PENCHU
VERE OSTHE COUNT MINUS CHEY
EPPUDAITHEY COUNT 0 AYIDHO, APPUDE MANAKI CLARITY OCHESTADHI, IDHI MANA MAJORITY KAADHU ANI
NEXT ELEMENT NI MAJORITY ANUKODAME

*/

int majorityElement(vector<int> &nums)
{
    // MOORE ALGOOO
    int n = nums.size();
    int candidate = -1, votes = 0;
    for (int i = 0; i < n; i++)
    {
        if (votes == 0)
        {
            candidate = nums[i];
            votes = 1;
        }
        else
        {
            if (nums[i] == candidate)
            {
                votes++;
            }
            else
            {
                votes--;
            }
        }
    }
    int count = 0;
    for (int n : nums)
    {
        if (n == candidate)
        {
            count++;
        }
    }
    if (count >= (n / 2))
    {
        return candidate;
    }
    return -1;
}

int main() {
    
    return 0;
}