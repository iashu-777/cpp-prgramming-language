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
ll n,m,k;
cin>>n>>m>>k;
ll ans=0;
for(ll i=0;i<n;i++){
    ll sum=0;
    for(ll j=0;j<k;j++){
        ll x;
        cin>>x;
        sum+=x;
    }
    ll q;
    cin>>q;
    if(q<=10 && sum>=m){
        ans++;
    }
    
}
cout<<ans<<endl;
return 0;
}