#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)


ll func(vector<vector<ll>>&v){
    ll n=v.size();
    ll sum=0;
    for(ll i=0;i<n;i++){
        ll mini=INT_MAX;
        ll k=0;
        for(ll j=i;j<n;j++){
            mini=min(mini,v[k][j]);
            k++;
        }
        if(mini<0){
            sum+=abs(mini);
        }
    }
    for(ll i=1;i<n;i++){
        ll mini=INT_MAX;
        ll k=0;
        for(ll j=i;j<n;j++){
            mini=min(mini,v[j][k]);
            k++;
        }
        if(mini<0){
            sum+=abs(mini);
        }
    }
    return sum;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;

while(t--){
    ll n;
    cin>>n;
    vector<vector<ll>>v;
    for(ll i=0;i<n;i++){
        vector<ll>temp;
        for(ll j=0;j<n;j++){
            ll x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }    
    ll ans=func(v);
    cout<<ans<<"\n";
 
}
return 0;
}