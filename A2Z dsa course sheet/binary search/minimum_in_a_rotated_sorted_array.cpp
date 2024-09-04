#include<bits/stdc++.h>
using namespace std;
// minimum in a rotated sorted array
int Min(vector<int>&arr){
    int n=arr.size();
    int low=0,high=n-1,ans=INT_MAX;
    while(low<=high){
        int mid=(low+high)/2;

        //search space is already sorted 
        //then always arr[low] is will be smaller
        //in that search space
        if(arr[low]<=arr[high]){
            ans=min(ans,arr[low]);
            break;
        }

        //is left sorted
        if(arr[low]<=arr[mid]){
            if(arr[low]<ans){
                ans=arr[low];
            }
            low=mid+1;
        }
        //is right sorted
        else{
            if(arr[mid]<ans){
                ans=arr[mid];

            }
                high=mid-1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int t;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>t;
        arr.push_back(t);
    }
    cout<<Min(arr);
}