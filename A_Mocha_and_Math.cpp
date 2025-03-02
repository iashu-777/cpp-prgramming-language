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
    vector<ll>v;
    loop(0,n,1){
        ll x;
        cin>>x;
        v.push_back(x);
        
    }
    ll mini=v[0];
    for(ll i=1;i<n;i++){
        mini=mini&v[i];
    }
    
    cout<<mini<<"\n";
 
}
return 0;
}