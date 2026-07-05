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





int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while(t--){
ll n,x;
cin>>n>>x;
vector<ll>v;
for(ll i=0;i<n;i++){
ll p;
cin>>p;
v.emplace_back(p);
}
vector<pair<ll,ll>>v1;
for(ll i=0;i<n;i++){
    v1.push_back({v[i]-x,v[i]+x});
}
ll count=0;
// sort(v1.begin(),v1.end());
// for(auto x:v1)cout<<x.first<<","<<x.second<<"  ";
// cout<<endl;
ll flag=0;
ll l=v[0]-x;
ll r=v[0]+x;
for(ll i=0;i<n;i++){
    l=max(v[i]-x,l);
    r=min(v[i]+x,r);
    if(l>r){
        count++;
        l=v[i]-x;
        r=v[i]+x;
    }
}
// if(flag==1)count++;
cout<<count<<endl;

}

return 0;
}