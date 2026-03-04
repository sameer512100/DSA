class Solution {
public:
bool possible(vector<int>& bloomDay,int day,int m,int k){
    int count=0,b=0;
    for(int n : bloomDay){
        if(n<=day){
            count++;
            if(count==k){
                b++;
                count=0;
            }
        }else{
            count=0;
        }
    }
    return b>=m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k>bloomDay.size()){
            return -1;
        }
        int res=-1;
        int low = *min_element(begin(bloomDay),end(bloomDay));
        int high = *max_element(begin(bloomDay),end(bloomDay));
        while(low<=high){
            int mid = (low+high)/2;
            if(possible(bloomDay,mid,m,k)){
                res = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return res;
    }
};