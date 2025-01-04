#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1;
        return 0;
    }
    vector<pair<int,int>>p;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        p.push_back({k,i+1});
    }
    sort(p.begin(),p.end());
    if(p[0].first==p[1].first){
        cout<<"Still Rozdil";
    }
    else{
        cout<<p[0].second;
    }
    return 0;
}