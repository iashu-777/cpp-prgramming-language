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
    vector<ll>v;
    cin>>n;
    loop(0,n,1) {
        ll x;
        cin>>x;
        v.push_back(x);
    }
map<ll,ll>mpp;
for(ll i=0;i<n-1;i++){
    for(ll j=i+1;j<n;j++){
        mpp[gcd(v[i],v[j])];
    }
}
ll flag=0;
for(ll i=2;i<=n;i++){
    if(mpp.begin()->first<=i){
        mpp.begin()->second--;
        if(mpp.begin()->second==0){
            mpp.erase(mpp.begin());
        }
    }
    else{
        flag=1;
    }
}
if(flag==1){
    cout<<"No";
}
else{
    cout<<"Yes";
}
cout<<"\n";
}
return 0;
}