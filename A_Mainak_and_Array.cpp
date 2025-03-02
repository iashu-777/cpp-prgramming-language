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
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    ll maxi=*max_element(v.begin(),v.end());
    ll mini=*min_element(v.begin(),v.end());
    ll ans=0;
    ans=v[n-1]-v[0];
    ans=max(ans,maxi-v[0]);
    ans=max(ans,v[n-1]-mini);
    ll c=INT_MIN;
    ll k;
    for(ll i=0;i<n-1;i++){
        ans=max(ans,v[i]-v[i+1]);
    }
    cout<<ans<<endl;
}
return 0;
}