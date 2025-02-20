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
ll n;
cin>>n;
ll xors=0;
for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    xors=xors^x;
}
ll t=0;
if(n%2==0){
    if(xors==0){
        t=2;
    }
    else{
        t=-1;
    }
}
else{
    t=xors;
}
if(t>=0 && t<pow(2,8))
cout<<t<<"\n";
else
cout<<-1<<"\n";
}
return 0;
}