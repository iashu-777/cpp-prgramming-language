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
    ll n;
    cin>>n;
    // vector<ll>v;
    ll no=0;
    ll po=0;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        // v.push_back(x);
        if(x==1)po++;
        else no++;
    }
    ll ans=0;
    if(no>po){
        ans+=(no-(n/2));
        no=no-ans;
    }
    if(no%2!=0)ans++;
    cout<<ans<<"\n";
}
return 0;
}