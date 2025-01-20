#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll a1,a2,b1,b2;//a1 a2 suneet b1 b2 slavic
    cin>>a1>>a2>>b1>>b2;
    ll w=0;
    ll su=0;
    ll sl=0;
   
    if(a1>b1)su++;
    else if(a1<b1) sl++;
    if(a2>b2)su++;
    else if(a2<b2)sl++;

    if(su>sl)w++;

    su=0;
    sl=0;

    if(a1>b2)su++;
    else if(a1<b2) sl++;
    if(a2>b1)su++;
    else if(a2<b1)sl++;

    if(su>sl)w++;

    su=0;
    sl=0;

    if(a2>b1)su++;
    else if(a2<b1) sl++;
    if(a1>b2)su++;
    else if(a1<b2)sl++;

    if(su>sl)w++;
    su=0;
    sl=0;

    if(a2>b2)su++;
    else if(a2<b2) sl++;
    if(a1>b1)su++;
    else if(a1<b1)sl++;

    if(su>sl)w++;
    cout<<w<<"\n";
}
return 0;
}