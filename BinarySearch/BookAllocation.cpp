class Solution {
  public:
  bool pos(vector<int>& arr,int barrier,int k){
      int stu=1;
      int prev=0;
      for(int i=0;i<arr.size();i++){
          if(arr[i]>barrier){
              return false;
          }
          if(prev+arr[i]>barrier){
              stu++;    
              prev = arr[i];
          }else{
              prev+=arr[i];
          }
      }
      return stu<=k;
  }
    int findPages(vector<int> &arr, int k) {
        // code here
        if(k>arr.size()){
            return -1;
        }
        int n = arr.size(),low=*min_element(begin(arr),end(arr)),res=-1;
        int high = 0;
        for(int n : arr){
            high+=n;
        }
        while(low<=high){
            int mid = (low+high)/2;
            if(pos(arr,mid,k)){
                res = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return res;
    }
};