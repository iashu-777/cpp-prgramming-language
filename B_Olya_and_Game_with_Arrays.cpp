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
    vector<vector<ll>>v;
    for(ll i=0;i<n;i++){
        ll size;
        cin>>size;
        vector<ll>a;
        for(ll j=0;j<size;j++){
            ll x;
            cin>>x;
            a.push_back(x);
        }
        
        sort(a.begin(),a.end());
      v.push_back(a);
}
ll mini=INT_MAX;
for(ll i=0;i<n;i++){
   mini=min(v[i][0],mini);
}
ll c=mini;
mini=INT_MAX;
ll sum=0;
for(ll i=0;i<n;i++){
    sum+=(v[i][1]);
   mini=min(v[i][1],mini);
}
cout<<c+(sum-mini)<<endl;



}
return 0;
}