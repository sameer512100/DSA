#include<bits/stdc++.h>
using namespace std;

/*

Given an integer array arr[], find the subarray (containing at least one element) which has the maximum possible sum, and return that sum.
Note: A subarray is a continuous part of an array.

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
    int sum=vec[0],maxi=vec[0];
    for(int i=1;i<vec.size();i++){
        maxi = max(vec[i],maxi+vec[i]);
        sum = max(sum,maxi);
    }
    cout<<"maximum subarray sum is : "<<sum<<" ";
    return 0;
}