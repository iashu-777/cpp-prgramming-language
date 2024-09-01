#include<bits/stdc++.h>
using namespace std;
//lower bound
int lowerBound(vector<int>&arr,int n,int key){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=key){
            ans=mid;
            //trim down the search space
            high=mid-1;
        }
        else{
            low=mid+1;
        } 
    }
    return ans;
}
//upper boud
int upperBound(vector<int>&arr,int n,int key){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>key){
            ans=mid;
            //trim down the search space
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
pair<int,int>FirstandLastPos(vector<int>&arr,int n,int k){
    int lb=lowerBound(arr,n,k);
    if(lb==n || arr[lb]!=k) return {-1,-1};
    return {lb,upperBound(arr,n,k)-1};
}
int main(){
    int n;
    cin>>n;
    int t;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>t;
        arr.push_back(t);
    }
    int x;
    cin>>x;
    cout<<FirstandLastPos(arr,x,n).first<<" "<<FirstandLastPos(arr,x,n).second;
}