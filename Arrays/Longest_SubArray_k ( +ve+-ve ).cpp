#include<bits/stdc++.h>
using namespace std;

/*

Given an array (can include negative numbers), find the length of the longest subarray whose sum is exactly k

*/


/*

sameer oka array ichaaru ra
aithey 
andhulo manam em cheyyali basic ga
aa array lo subarray sum = k undho ledho chudaali

double loop vaadthe O(n^2) ayidhi
so ippudu basic ga em cheyyali ante 
oka prefix array build cheyyali firstu


first idhi chudu:
l,r oka two points anuko - starting & ending points of our subarray
[l...r] = k

arey oka array undhi [.....l....r....], ila => now sum of [l..r] = prefix[r]-prefix[l-1] ee ga, appude ga madhyalo unna sum ochedhi
haa 
so 
pre[r]-pre[l-1] = k ( manaki kaavalsindhi )
ee equation ni re arrange chey
pre[l-1] = pre[r]-k
ante ento cheppu chuddam
manamu mundhu pre[r]-k chusam anuko
aa point nunchi ippudu unna r ki sum k unattu
anthey ga


*/

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> prevSum;
        int count = 0;
        int currSum = 0;
        prevSum[0] = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            currSum += nums[i];
            if (prevSum.find(currSum - k) != prevSum.end())
            {
                count += prevSum[currSum - k];
            }
            prevSum[currSum]++;
        }
        return count;
    }
};

int main() {
    
    return 0;
}