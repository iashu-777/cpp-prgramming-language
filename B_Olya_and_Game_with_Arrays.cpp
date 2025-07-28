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
    ll sum=0;
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
        v.push_back(a[0]);
a.erase(find(a.begin(),a.end(),a[0]));
        v.push_back(a[0]);
        sum+=a[0];
    }
    sort(v.begin(),v.end());
    ll c=v[0];
v.erase(find(v.begin(),v.end(),c));

    cout<<sum+c-v[0]<<endl;
}
return 0;
}