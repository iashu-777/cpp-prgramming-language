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
unordered_map<ll,ll>mpp;
ll n;
cin>>n;
ll sum=0;
vector<ll>v;
for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.push_back(x);
}
sum=accumulate(v.begin(),v.end(),0);
ll maxi=*max_element(v.begin(),v.end());
cout<<maxi*n-sum;

cout<<endl;
return 0;
}