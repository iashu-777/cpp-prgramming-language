#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    string s;
    cin>>s;
    unordered_map<char,int>mpp;
    for(auto x:s){
        mpp[x]++;
    }
    string ans;
    string part;
    for(auto x:mpp){
        if(x.second%k!=0){
            cout<<-1;
            return 0;
        }
        int d=x.second/k;
        while(d--)
        part+=x.first;
    }
    while(k--){
        ans+=part;
    }
    cout<<ans;
    return 0;
}