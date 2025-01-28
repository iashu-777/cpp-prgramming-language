#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,m;
cin>>n>>m;
vector<ll>v;
vector<ll>v1;
vector<ll>t(n);
loop(0,n,1){
    ll x;
    cin>>x;
    v.push_back(x);
}
loop(0,m,1){
    ll x;
    cin>>x;
    v1.push_back(x);
}
ll dis=0;
unordered_map<ll,ll>mpp;
for(ll i=n-1;i>=0;i--){
    if(mpp.find(v[i])!=mpp.end()){
        mpp[v[i]]++;
        t[i]=dis;
    }else{
        mpp[v[i]]++;
        dis++;
        t[i]=dis;
    }
}
loop(0,m,1){
    cout<<t[v1[i]-1]<<"\n";
}

return 0;
}