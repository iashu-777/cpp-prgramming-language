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
    ll ans=1;
while(n--){
    ll a,b;
    cin>>a>>b;
v.push_back({a,b});
}
ll maxi=1;
for(ll i=0;i<v.size()-1;i++){
    if(v[i]==v[i+1])ans++;
    else{
        maxi=max(maxi,ans);
        ans=1;
    }
}
maxi=max(maxi,ans);
        ans=1;
cout<<maxi;
return 0;
}