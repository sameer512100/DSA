#include<bits/stdc++.h>
using namespace std;

/*

Given an integer array arr[], find the subarray (containing at least one element) which has the maximum possible sum, and return that sum.
Note: A subarray is a continuous part of an array.

*/


/*

SO DEKH
NOW THE PROBLEM ASKED IS
SAMEER, PRINT THE ARRAY ALSO
JO MAX SUM SUBARRAY HAI
USKO PRINT BHI KARNA HAI
HMHM
SO DEKHNA
JAB BHI WE START
HAMARA SUM 0 HOGA RIGHT
AND JAB ELEMENT ADD KIYE HONGE
APNA SUM >0 HOGA
SO DEKH
JAHA BHI SUM 0 HAI
WO APNA START HOGA, RIGHT
AUR JAHA TAK ELEMENTS ADD KARENGE
WO APNA END HOGA
SO LOOK AT THE BELOW CODE TO UNDERSTAND
*/



int main() {
    int n;
    cout<<"enter the number of elements:";
    cin>>n;
    vector<int> vec(n);
    cout<<"enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int start=0,ansStart=0,ansEnd=0;
    int maxi = vec[0];
    int sum=0;
    for(int i=0;i<n;i++){
        if(sum==0){ // OUT STARTING POINT
            start = i;
        }
        sum+=vec[i];
        if(sum>maxi){
            maxi = sum;
            ansStart=start; // we added something to sum, so ansStart is subarray starting point
            ansEnd = i; // upto where we add elems
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<"The subarray is : "<<endl;
    for(int i=ansStart;i<=ansEnd;i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    cout<<"maximum subarray sum is : "<<sum<<" ";
    return 0;
}