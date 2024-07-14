#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //precompute
    unordered_map<int,int>mpp; // map sorted order me rakhega
    //unordered map unsorted rakhta hai
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    //just seeing that map and unordered map is sorted or not
    // for(auto it:mpp){
    //     cout<<it.first<<"->"<<it.second<<endl;
    // }
    cout<<endl;
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<mpp[number]<<endl;
    }
}