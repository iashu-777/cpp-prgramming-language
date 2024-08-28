#include<bits/stdc++.h>
using namespace std;
int quick(vector<int>&arr,int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1) i++;
        while(arr[j]>pivot && j>=low+1) j--;
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low] ,arr[j]); 
    return j;
}
void qs(vector<int>&arr,int low,int high){
    if(low<high){
        int partIndex=quick(arr,low,high);
        qs(arr,low,partIndex-1);
        qs(arr,partIndex+1,high);
    }
}
int main(){
    int n=6;
    vector<int>arr{2,3,1,5,4,7};
    qs(arr,0,n-1);
   for(int i=0;i<arr.size();i++){
      cout<<arr[i]<<" ";
   }

}