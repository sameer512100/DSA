/*

reverse bits ante em ledhu
oka number ki binary form untadhi ga
aa binary form ni reverse kotti
ochina answer ni return cheyyali
like example:
6 = 110
reverse chesthe enti
011 kadha => 1+2 => 3
haa anthey adhi cheyyali
so basic ga em chesthunnam ra process
first oka result ane variable theesko
left shift ante ento thelsa
unna number lo values anni oka step left ki move cheydam, right shift same right ki ( LSB ante last value ni right shift mingithey, aa last dhi pop out aitadhi anuko inka)
so result variable theesko
direct ga example chudu le:
110 undhi, ANTE 6
last digit theesko "0"
first result ni left shift cheyyali 
ante REY VALUE THEESKO LEFT KI PO ani, appude kadha reverse order lo ochedhi
haa
n&1 chesthe last bit ostadhi
right most bit ostadhi

*/

class Solution
{
public:
    int reverseBits(int n)
    {
        if (n == 0)
        {
            return 0;
        }
        int res = 0;
        for (int i = 1; i <= 32; i++)
        {
            res <<= 1;
            res = (res | (n & 1));
            n >>= 1;
        }
        return res;
    }
};