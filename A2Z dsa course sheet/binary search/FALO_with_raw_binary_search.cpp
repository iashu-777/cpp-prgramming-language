#include<bits/stdc++.h>
using namespace std;
int firstOccur(vector<int>&arr,int n,int k){
    int low=0,high=n-1;
    int first=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k){
            first=mid;
            high=mid-1;
        }
        else if(arr[mid]<k) low=mid+1;
        else high=mid-1;
    }
    return first;
}
int LastOccur(vector<int>&arr,int n,int k){
    int low=0,high=n-1;
    int last=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k){
            last=mid;
            low=mid+1;
        }
        else if(arr[mid]<k) low=mid+1;
        else high=mid-1;
    }
    return last;
}
pair<int,int>FirstandLastPos(vector<int>&arr,int n,int k){
    int first=firstOccur(arr,n,k);
    if(first==-1) return {-1,-1};
    int last=LastOccur(arr,n,k);
    return {first,last};
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
    cout<<FirstandLastPos(arr,n,x).first<<" "<<FirstandLastPos(arr,n,x).second;

}