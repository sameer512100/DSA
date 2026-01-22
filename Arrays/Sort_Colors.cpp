#include<bits/stdc++.h>
using namespace std;


// GIVEN AN ARRAY WITH 0,1,2'S ONLY, SORT THEM IN PLACE
/*

i = 0 ni
j = 1 ni
k = 2 ni represeting 

ikkada i,j ochesi starting lo pedtham ra
manam jth element chuskuntam maatiki
ippudu j 2 anuko, 2 anedhi k place lo undaali, ante last lo undaali kadha
so swap chestham k,j ni
adhe j 1 anuko, ith place lo 1 undaali
so swap chestham i,j ni
adhe j=0 anuko
j ni,i ni mundhuki 

*/

void sortColors(vector<int> &nums)
{
    int i = 0, j = 0, k = nums.size() - 1;
    while (j <= k)
    {
        if (nums[j] == 1)
        {
            j++;
        }
        else if (nums[j] == 2)
        {
            swap(nums[j], nums[k]);
            k--;
        }
        else
        {
            swap(nums[j], nums[i]);
            i++;
            j++;
        }
    }
}

int main() {
    
    return 0;
}