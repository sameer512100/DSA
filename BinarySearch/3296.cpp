class Solution {
public:
typedef long long ll;

bool check(ll mid, vector<int>& vec, int mH){
    ll h = 0;

    for(int &t : vec){
        ll k = (sqrt(1 + 8.0 * mid / t) - 1) / 2;
        h += k;

        if(h >= mH)
            return true;
    }

    return false;
}

long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
    int maxi = *max_element(begin(workerTimes), end(workerTimes));

    ll l = 1;
    ll r = (ll)maxi * mountainHeight * (mountainHeight + 1) / 2;
    ll res = 0;

    while(l <= r){
        ll mid = l + (r - l) / 2;

        if(check(mid, workerTimes, mountainHeight)){
            res = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }

    return res;
}
};