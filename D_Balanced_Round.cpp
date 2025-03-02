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
    ll n,k;
    cin>>n>>k;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    
    }
    sort(v.begin(),v.end());
    //sliding window
    ll i=0;
    ll j=1;
    ll maxi=0;
    while(i<n-1 && j<n){
        while(j<n &&abs(v[j]-v[j-1])<=k){
            j++;
        }
        maxi=max(maxi,j-i+1);
        j++;
        i=j-1;
    }
    if(n==1){
        cout<<0<<endl;
    }else
    cout<<n-maxi+1<<"\n";
 
}
return 0;
}