#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll a,b,c,d,e;
cin>>a>>b>>c>>d>>e;
map<ll,ll>mpp;
mpp[a]++;
mpp[b]++;
mpp[c]++;
mpp[d]++;
mpp[e]++;
ll flag=0;
if(mpp.size()==2){
    auto x=mpp.begin();
    if(x->second==2){
        x++;
        if(x->second==3){
            flag=1;
        }
    }
    else if(x->second==3){
        x++;
        if(x->second==2){
            flag=1;
        }
    }
}
if(flag==1){
    cout<<"Yes";
}
else{
    cout<<"No";
}
return 0;
}