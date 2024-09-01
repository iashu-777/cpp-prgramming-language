#include<bits/stdc++.h>
using namespace std;
int search(vector<int>&arr,int n,int k){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k) return mid;
        
        if(arr[low]<=arr[mid]){ //is left sorted
            if(arr[low]<=k && k<=arr[mid]){//is present in left half
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{//right sorted
            if(arr[mid]<=k && k<=arr[high]){ //is present at right half
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
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
    cout<<search(arr,n,key);
}