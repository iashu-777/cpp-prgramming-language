#include<bits/stdc++.h>
using namespace std;

int main(){
string a,b,c;
cin>>a>>b>>c;
unordered_map<char,int>mpp;
for(auto x:a){
    mpp[x]++;
}
for(auto x:b){
    mpp[x]++;
}
for(auto x:c){
    mpp[x]--;
}
for(auto x:mpp){
    if(x.second!=0){
        cout<<"NO";
        return 0;
    }
}
cout<<"YES";
    return 0;
}