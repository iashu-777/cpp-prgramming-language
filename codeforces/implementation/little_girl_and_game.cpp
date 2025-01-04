#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    unordered_map<char,int>mpp;
    for(auto x:s){
        mpp[x]++;
    }
    int count=0;
    for(auto x:mpp){
        if(x.second%2!=0){
            count++;
        }
    }
    if(count%2!=0 || count==0){
        cout<<"First";
    }
    else{
        cout<<"Second";
    }
    return 0;
}