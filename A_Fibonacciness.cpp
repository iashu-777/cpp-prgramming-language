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
vector<ll>v;
for(ll i=0;i<4;i++){
    ll x;
    cin>>x;
    v.push_back(x);
}
unordered_map<ll,ll>mpp;
mpp[v[0]+v[1]]++;
mpp[v[2]-v[1]]++;
mpp[v[3]-v[2]]++;
ll maxi=INT_MIN;
for(auto x:mpp){
    maxi=max(maxi,x.second);
}
cout<<maxi<<endl;
}
return 0;
}