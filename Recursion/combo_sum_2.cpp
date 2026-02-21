class Solution {
public:
void ok(int idx,vector<vector<int>>& vec,vector<int>& temp,vector<int>& arr,int target,int n){
    if(target==0){
        vec.push_back(temp);
        return;
    }
   for(int i=idx;i<n;i++){
    if(i>idx && arr[i]==arr[i-1]){
        continue;
    }
    if(arr[i]>target){
        break;
    }
    temp.push_back(arr[i]);
    ok(i+1,vec,temp,arr,target-arr[i],n);
    temp.pop_back();
   }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(begin(candidates),end(candidates));
        vector<vector<int>> vec;
        vector<int> temp;
        int n = candidates.size();
        ok(0,vec,temp,candidates,target,n);
        return vec;
    }
};

/* JUST DRY RUN SAMEER ~~ */