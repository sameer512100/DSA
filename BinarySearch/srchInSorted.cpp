/* THIS IS THE MOST CRAZIEST QUESTION IN BS BRO !!!! AMAZING !!

SO BASICALLY WE'RE GIVEN A LEFT ROTATED SORTED ARRAY
ANTE EM LEDHU
OKA ARRAY SORTED UNDEDHI 
BUT EVADU LEFT ROTATE KOTTADU
LEFT ROTATE ANTE = left lo unna elements venakki pothai
right rotation ante = right lo unna elements mundhuku osthai

haa ee question lo oka array undedhi
aithey dhaanini evaru left rotate chesi mingaaru
so dhaantlo value ni kanipettali BS use chesi
problem enti basic ga
left rotate kodthe
sorted feature mingidhi
like
1,2,3,4,5 array anuko
2 indices left sort mingu
3,4,5,1,2 ayindhi
dheeni meedha BS cheylem
so basic ga em cheyyalo thelsa
mid kanukko => mid ee answer aithey sexy, return cheseyi
lekapothey ne problem
binary search only sorted meedha cheyochu kadha
so mid calculcate chesina tarvaatha
nee left sorted undha ledha right sorted undha ani vethuku
ante basic ga
ipppudu arr[mid] chesthav kadha tarvaatha chudu left sorted undha,right aa ani

inka concept gurthu raakapothey stiver dekhle bhaiii, cheppadam kashtam idhi
*/

class Solution
{
public:
    int search(vector<int> &arr, int target)
    {
        int n = arr.size();
        int low = 0, high = n - 1;
        while (low <= high)
        {
            int mid = (high + low) / 2;
            if (arr[mid] == target)
            {
                return mid;
            }
            if (arr[low] <= arr[mid])
            {
                if (arr[low] <= target && target <= arr[mid])
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            else
            {
                if (arr[mid] <= target && target <= arr[high])
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};