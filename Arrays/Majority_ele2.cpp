class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> vec;
        int ct1=0,ct2=0;
        int el1=-1,el2=-1;
        for(int n : nums){
            if(ct1==0 && n!=el2){
                ct1 = 1;
                el1 = n;
            }
            else if(ct2==0 && n!=el1){
                ct2 = 1;
                el2 = n;
            }
            else if(el1==n){
                ct1++;
            }else if(el2==n){
                ct2++;
            }else{
                ct1--;ct2--;
            }
        }
        int n = floor(nums.size()/3);
        int x=0,y=0;
        for(int n : nums){
            if(n==el1){
                x++;
            }else if(n==el2){
                y++;
            }
        }
        if(x>n){
            vec.push_back(el1);
        }
        if(y>n){
            vec.push_back(el2);
        }
        sort(begin(vec),end(vec));
        return vec;
    }
};