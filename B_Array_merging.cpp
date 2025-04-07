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
    vector<ll>v1;
    vector<ll>v2;
    for(ll i=0;i<2*n;i++){
        ll x;
        cin>>x;
        v1.push_back(x);
    }
    // for(ll i=0;i<n;i++){
    //     ll x;
    //     cin>>x;
    //     v2.push_back(x);
    // }
    ll count=1;
    ll maxi=1;
    for(ll i=0;i<(2*n)-1;i++){
        if(v1[i]==v1[i+1]){
            count++;
        }
        else{
            maxi=max(count,maxi);
            count=1;
        }
    }
    maxi=max(count,maxi);
            count=1;
    cout<<maxi<<endl;
    
}
return 0;
}