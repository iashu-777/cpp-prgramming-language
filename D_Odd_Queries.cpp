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
    ll n,q;
    cin>>n>>q;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    vector<ll>pre;
    ll sum=0;
    for(ll i=0;i<n;i++){
        sum+=(v[i]);
        pre.push_back(sum);
    }
    for(ll i=0;i<q;i++){
        ll l,r,k;
        ll ans=0;
        cin>>l>>r>>k;
        if(l==1){
            ans=(pre[n-1]-pre[r-1])+(k*(r-l+1));
        }
        else{
            ans=(pre[n-1]-(pre[r-1]-pre[l-2]))+(k*(r-l+1));
        }
        if(ans%2!=0)
        cout<<"YES";
        else
        cout<<"NO";
        cout<<"\n";
    }
}
return 0;
}