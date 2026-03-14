class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int n : nums){
            if(n%2==0){
                mpp[n]++;
            }
        }
        for(int n : nums){
            if(n%2==0 && mpp[n]==1){
                return n;
            }
        }
        return -1;
    }
};