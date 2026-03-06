class Solution {
  public:
  void ok(vector<int>& arr,vector<vector<int>>& vec,vector<int>& temp,vector<int>& flag,int n){
      if(temp.size()==n){
          vec.push_back(temp);
          return;
      }
      for(int i=0;i<n;i++){
          if(flag[i]!=1){
              temp.push_back(arr[i]);
              flag[i] = 1;
              ok(arr,vec,temp,flag,n);
              flag[i] = 0;
              temp.pop_back();
          }
      }
  }
    vector<vector<int>> permuteDist(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<vector<int>> vec;
        vector<int> temp;
        vector<int> flag(n,0);
        ok(arr,vec,temp,flag,n);
        return vec;
    }
};