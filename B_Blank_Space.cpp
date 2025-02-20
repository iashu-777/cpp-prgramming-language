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
    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    ll maxi=INT_MIN;
    ll po=-1;
    for(ll i=0;i<n;i++){
        if(v[i]==1){ 
            maxi=max(maxi,i-po-1);
            po=i;
        }
    }
    maxi=max(maxi,n-po-1);
    cout<<maxi<<"\n";
 
}
return 0;
}