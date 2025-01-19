#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
vector<pair<ll,ll>>v;
unordered_map<ll,ll>mpp;
ll count=0;
for(ll i=0;i<n;i++){
    ll a,b;
    cin>>a>>b;
    v.push_back({a,b});
    mpp[a]++;
    mpp[b]++;
}

for(auto x:v){
    if(x.first==x.second){
        if(mpp[x.second]==1)
        mpp[x.second]=0;
        else if(mpp[x.second]!=0)
        mpp[x.second]=1;
    }
    else{
        mpp[x.second]=0;
    }
}
for(auto x:mpp){
    count+=x.second;
}
cout<<count;
return 0;
}       