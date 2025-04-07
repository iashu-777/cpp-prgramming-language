#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    vector<pair<ll,ll>>v;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back({x,i+1});
    }
    sort(v.begin(),v.end());
    vector<ll>ans;
    ll p=0;
    for(auto x:v){
        if(x.second>k){
            break;
        }
        p++;
        ans.push_back(x.second);
    }
    reverse(ans.begin(),ans.end());
    for(auto x:ans){
        cout<<x<<" ";
    }
    ans.clear();
for(ll i=p;i<n;i++){
    ans.push_back(v[i].second);
}
reverse(ans.begin(),ans.end());
for(auto x:ans){
    cout<<x<<" ";
}
cout<<endl;
}
return 0;
}