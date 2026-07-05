#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }
bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0);}
 ll findIndex(const vector<ll>& v, ll key, ll i, ll j){ auto it=lower_bound(v.begin()+i,v.begin()+j+1,key); return (it!=v.begin()+j+1 && *it==key)? it-v.begin():-1; }   
  ll lbound(const vector<ll>& v, ll key, ll i, ll j){ return lower_bound(v.begin()+i, v.begin()+j+1, key) - (v.begin()+i); }





int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while(t--){
ll n,k;
cin>>n>>k;
vector<ll>v;
for(ll i=0;i<n;i++){
ll x;
cin>>x;
v.emplace_back(x);
}
map<ll,vector<ll>>mpp;
for(ll i=1;i<=k;i++){
    mpp[i].push_back(0);
}
for(ll i=0;i<n;i++){
    mpp[v[i]].push_back(i+1);
}
for(ll i=1;i<=k;i++){
    mpp[i].push_back(n+1);
}
ll mini=LLONG_MAX;
for(auto x:mpp){
    vector<ll>temp;
    for(ll i=0;i<x.second.size()-1;i++){
        temp.push_back(abs(x.second[i]-x.second[i+1])-1);
    }
    sort(temp.begin(),temp.end());

    
    ll val=temp.back();
    val=val/2;
    temp.pop_back();
    temp.push_back(val);
    sort(temp.begin(),temp.end());
    ll newval=temp.back();
    mini=min(mini,newval);
}

cout<<mini<<endl;
}

return 0;
}