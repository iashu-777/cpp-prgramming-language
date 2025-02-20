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
ll mini=INT_MAX;
while(n--){
    ll x;
    vector<ll>v;
    cin>>x;
    mini=min(mini,abs(x));
}
cout<<mini;

return 0;
}