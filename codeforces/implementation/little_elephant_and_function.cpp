#include<bits/stdc++.h>
using namespace std;
void func(vector<int>&v,int n){
    if(n-1==0){
        return;
    }
    else{
        swap(v[n-2],v[n-1]);
        func(v,n-1);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
    func(v,n);
    for(auto x:v){
        cout<<x<<" ";
    }
    return 0;
}