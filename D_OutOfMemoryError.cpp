#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n,m,h;
    cin>>n>>m>>h;
    vector<ll> v;
    for(ll i=0;i<n;i++){
        ll x; cin>>x;
        v.push_back(x);
    }
    vector<ll> vc=v;
    vector<pair<ll,ll>> v1;
    for(ll i=0;i<m;i++){
        ll a,b; cin>>a>>b;
        v1.push_back({a,b});
    }

    vector<ll> changed; 
    for(ll i=0;i<m;i++){
        ll z=v1[i].first;
        v[z-1]+=v1[i].second;
        changed.push_back(z-1); 

        if(v[z-1]>h){
            for(auto idx : changed){
                v[idx] = vc[idx];
            }
            changed.clear(); 
        }
    }

    for(ll i=0; i<n; i++){
        cout<<v[i]<<(i == n-1 ? "" : " ");
    }    
    cout<<endl;
}
return 0;
}