#include<bits/stdc++.h>
using namespace std;
int maxSum(vector<int>&arr,int n){
    int res=arr[0];
    int maxEnding=arr[0];
    for(int i=1;i<n;i++){
        maxEnding=max(maxEnding+arr[i],arr[i]);
        res=max(res,maxEnding);
    }
    return res;
}
int main()
{   int n;
    cin>>n;
    int t;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>t;
        arr.push_back(t);
    }
    cout<<maxSum(arr,n);
}


