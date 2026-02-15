/* LOL NICE PROBLEM ! WE HAVE TO FIND THE LEFT AND RIGHTMOST INDEX, SAME AS FIRST&LAST.cpp THO*/

class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        int count=0;
        int low=0,high=n-1;
        int idx1=-1,idx2=-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(arr[mid]==target){
                idx1= mid;
                high = mid-1;
            }
            else if(arr[mid]>target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        if(idx1==-1){
            return 0;
        }
        low=0;
        high=n-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(arr[mid]==target){
                idx2=mid;
                low = mid+1;
            }
            else if(arr[mid]>target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return idx2-idx1+1;
    }
};
