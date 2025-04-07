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
    unordered_map<ll,ll>mpp;
    ll count=0;
    for(auto x:v){
        mpp[x]++;
        count++;
        if(mpp[0]>=3 &&mpp[1]>=1 && mpp[3]>=1&& mpp[2]>=2&&mpp[5]>=1){
            // if(n>8)
            // cout<<n-1;
            // else
            // cout<<n;
            break;
        }
    }
    if(!(mpp[0]>=3 &&mpp[1]>=1 && mpp[3]>=1&& mpp[2]>=2&&mpp[5]>=1)){
        // if(n>8)
        // cout<<n-1;
        // else
        // cout<<n;
        count=0;
    }
    cout<<count;
    cout<<endl;
}
return 0;
}