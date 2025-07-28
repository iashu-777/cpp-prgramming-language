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
ll n;
cin>>n;
vector<string>v;
for(ll i=0;i<n;i++){
    string s;
    cin>>s;
    v.push_back(s);
}
unordered_map<string,ll>mpp;

for(ll i=0;i<n;i++){
    for(ll j=0;j<n;j++){
        if(v[i]==v[j])continue;
        mpp[v[i]+v[j]]++;
    }
}
cout<<mpp.size();
return 0;
}