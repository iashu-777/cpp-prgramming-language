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
int main(){
    int n;
    cin>>n;
    int t;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>t;
        arr.push_back(t);
    }
    int key;
    cin>>key;
    cout<<upperBound(arr,n,key);
}