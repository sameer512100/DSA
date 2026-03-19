class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        unordered_map<char, char> mpp1;
        unordered_map<char, char> mpp2;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            char ch1 = s[i];
            char ch2 = t[i];
            if (mpp1.find(ch1) != mpp1.end() && mpp1[ch1] != ch2 ||
                mpp2.find(ch2) != mpp2.end() && mpp2[ch2] != ch1)
            {
                return false;
            }
            else
            {
                mpp1[ch1] = ch2;
                mpp2[ch2] = ch1;
            }
        }
        return true;
    }
};

/*


em ledhu 
peddha show huk question idhi
example chudu:
egg -> add
s = edd
t = add
manam s lo unna characters ni t lo unna characters tho map cheyyali
rendu same avvagalvo ledho cheppali
like
s lo e undhi
e -> a
d -> d
ippudu s lo characters map chesam ga, aa map vi raayi
e place lo a ostadhi
a
d place lo d ne
so add ayindhi
so s==t

inko example:
s=paper t = title
p -> t
a -> i
e -> l
r -> e
now rewrite s
title
rendu chars same vaatiki map cheykudadhu
example:
s = f11
t = b23
f -> b
1 -> 2
1 -> 3 NOOOO CHEYKUDADHU GA
ALREADY 1 MAPPED TO 2
so yup
code em ledhu inka
rendu maps theesko
chudu code ardham ayidhi
map 1 lo s -> t storing
map 2 lo t -> s storing
first chustham 
enti ch1 map 1 lo undha ani
haa undhi ante ganaka
enti 
idhi ch1 -> ch2 map ee chestundha ani
lekapothey false;

*/