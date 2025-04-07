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
    ll n,k;
    cin>>n>>k;
    vector<ll>v;
    loop(0,n,1){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    ll sum=accumulate(v.begin(),v.end(),0LL);
    
    ll min=(sum+k-1)/k;
    ll maxi=0;
    for(auto x:v){
        maxi+=((x+k-1)/k);
    }
    cout<<min<<" "<<maxi<<"\n";
 
}
return 0;
}