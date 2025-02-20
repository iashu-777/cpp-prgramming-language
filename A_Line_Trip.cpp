#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n,x;
    cin>>n>>x;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    ll d=v[0];
    ll maxi=d;
    ll s=(x-v[n-1])*2;
    for(ll i=1;i<n;i++){
        maxi=max(maxi,v[i]-v[i-1]);
    }
    maxi=max(maxi,s);
    cout<<maxi<<endl;
 
}
return 0;
}