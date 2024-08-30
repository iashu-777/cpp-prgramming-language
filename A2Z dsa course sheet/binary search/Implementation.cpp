#include<bits/stdc++.h>
using namespace std;
//iterative
int BinSearch(vector<int>&arr,int key){
 int l=0, h=arr.size()-1;
        int mid;
        while(l<=h){
            mid=(l+h)/2;
            if(key==arr[mid]){
                return mid;
            }
            else if(key<arr[mid]){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return -1;
}
//recursive
int BinSearch2(vector<int>&arr,int low,int high,int key){
    int mid=(low+high)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(low>high){
        return -1;
    }
    else{
        return BinSearch2(arr,mid+1,mid-1,key);
    }
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
    cout<<BinSearch2(arr,0,n-1,key);
}