class Solution {
public:
int count(int n){
    int sum=0;
    while(n>0){
        if(n&1){
            sum++;
        }
        n>>=1;
    }
    return sum;
}
    vector<int> sortByBits(vector<int>& arr) {
        sort(begin(arr),end(arr),[&](int a,int b){
            int A = count(a);
            int B = count(b);
            if(A==B){
                return a<b; 
            }
            return A<B;
        });
        return arr;
    }
};