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
    ll n,k,q;
    cin>>n>>k>>q;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    ll count=0;
    ll ways=0;
    for(ll i=0;i<n;i++){
        if(v[i]<=q){
            count++;
        }
        else{
            ll j=count-(k-1);
            if(j<=0){
                count=0;
                continue;}
            ways+=((j*(j+1))/2);
            count=0;
        }
    }
    ll j=count-(k-1);
            if(j>0)
            ways+=(j*(j+1))/2;
            // count=0;
    cout<<ways<<endl;
}
return 0;
}