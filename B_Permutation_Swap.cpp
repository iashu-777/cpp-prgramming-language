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
    vector<ll>v(n+1);
    unordered_map<ll,ll>mpp;
    for(ll i=1;i<=n;i++){
        cin>>v[i];
        mpp[v[i]]=i;
    }
    ll maxi=0;
    for(ll i=1;i<=n;i++){
        maxi=max(maxi,abs(mpp[v[v[i]]]-i));
        // swap(v[i],v[v[i]]);
    }


    
cout<<maxi<<endl;
}
return 0;
}