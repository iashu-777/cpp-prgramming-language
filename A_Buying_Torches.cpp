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
ll t;
cin>>t;
while(t--){
    ll x,y,k;
    cin>>x>>y>>k;
    ll a=(k+(y*k));
    ll b=(x-1);
    ll ans=(a+b-1)/b+k;
    if(k>=x && (k!=y)){
        cout<<ans-1<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    // cout<<ans<<endl;
}
return 0;
}