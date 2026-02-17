/*

rey babu idhi complex chesaaru anthey question
basic ga em ledhu
hours ni represent cheydaanki 4 bits,minutes ni represent cheydaanki 6 bits ichaaru anamata
HOURS:
_ _ _ _ => 0001 => 2^0 => 1 pm avtundhi
        => 0010 => 2^1 => 2 pm avtundhi
        => 0011 => 2^0+2^1 => 3 pm


same minutes kuda

ha aithey
manaki oka turnedOn ani value ichaaru
ante 
basic ga
inni lights lu on cheyochu ra thambi ani
so basic ga
code lo em chesthunnam
first 0 hour petti
minutes meedha bits on chesi chustham, okavela vaallu adigina turnedOn ki match avthe, push
next hour ki potham
ala ala anamaata 
anthey

*/


class Solution
{
public:
    vector<string> readBinaryWatch(int turnedOn)
    {
        vector<string> vec;
        for (int i = 0; i <= 11; i++)
        {
            for (int j = 0; j <= 59; j++)
            {
                if (__builtin_popcount(i) + __builtin_popcount(j) == turnedOn)
                {
                    string hour = to_string(i);
                    string minute = (j < 10 ? "0" : "") + to_string(j);
                    vec.push_back(hour + ":" + minute);
                }
            }
        }
        return vec;
    }
};