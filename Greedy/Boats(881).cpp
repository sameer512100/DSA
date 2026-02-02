/*

You are given an array people where people[i] is the weight of the ith person, and an infinite number of boats where each boat can carry a maximum weight of limit. Each boat carries at most two people at the same time, provided the sum of the weight of those people is at most limit.

Return the minimum number of boats to carry every given person.


em ledhu ra babu
sort chesi
last lo bandou
front lo buddodu vellagalaru emo chudu
velthe ganaka iddarni kalipi pampey
lekapothey
bandodni okkadne pampi

*/

class Solution
{
public:
    int numRescueBoats(vector<int> &people, int limit)
    {
        int i = 0, j = people.size() - 1;
        sort(begin(people), end(people));
        int count = 0;
        while (i <= j)
        {
            if (people[j] + people[i] <= limit)
            {
                i++;
                j--;
                count++;
            }
            else
            {
                j--;
                count++;
            }
        }
        return count;
    }
};