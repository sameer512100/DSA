#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"enter the number of elements:";
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int x;
    cout<<"enter the element you want to search:";
    cin>>x;
    int low=0,high=n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(vec[mid]==x){
            cout<<x<<" is at the index "<<mid<<" "<<endl;
            break;
        }
        else if(vec[mid]>x){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return 0;
}