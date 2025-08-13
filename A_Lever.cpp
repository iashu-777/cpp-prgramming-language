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
    ll n;
    cin>>n;
    vector<ll>a;
    vector<ll>b;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        a.push_back(x);
    }
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        b.push_back(x);
    }
    ll ans=1;
    for(ll i=0;i<n;i++){
        if(a[i]>b[i]){
            ans+=(a[i]-b[i]);
        }
    }
    cout<<ans<<endl;
}
return 0;
}