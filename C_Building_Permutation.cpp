#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
vector<ll>v;
loop(0,n,1){
    ll x;
    cin>>x;
    v.push_back(x);
}
sort(v.begin(),v.end());
ll moves=0;
for(ll i=0;i<n;i++){
    moves+=abs((i+1)-v[i]);
}
cout<<moves;
return 0;
}