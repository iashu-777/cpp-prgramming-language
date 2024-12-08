#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=1;
    vector<int>arr;
    for(int i=0;i<7;i++){
        int no;
        cin>>no;
        arr.push_back(no);
    }
    int i=0;
    while(n>0){
        n=n-arr[i];
        i++;
        if(i==arr.size()) i=0;
    }
    if(i==0){
        cout<<7;
    }
    else
    cout<<i;
}