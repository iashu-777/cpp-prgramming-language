#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }





int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
vector<ll>v;
unordered_map<ll,pair<vector<ll>,vector<ll>>>p;
for(ll i=0;i<n;i++){
ll k;
cin>>k;
p[k].first.push_back(i+1);
p[k].second.push_back(i);
}
ll flag=0;
for(auto &x:p){

    if(x.second.first.size()<=1){
        cout<<-1;
        flag=1;
        break;
    }
    rotate(x.second.first.begin(), x.second.first.begin() + 1, x.second.first.end());
}

vector<ll>ans(n);
for(auto x:p){
    for(ll i=0;i<x.second.first.size();i++){
        ans[x.second.second[i]]=x.second.first[i];
    }
}
if(flag==0){

    for(auto x:ans){
        cout<<x<<" ";
    }
}
// cout<<endl;
// for(auto x:p){
//     for(ll i=0;i<x.second.first.size();i++){
//         cout<<x.second.second[i]<<" ";;
//     }
// }
// cout<<endl;
// for(auto x:p){
//     for(ll i=0;i<x.second.first.size();i++){
//         cout<<x.second.first[i]<<" ";
//     }
// }
cout<<endl;
}


return 0;
}