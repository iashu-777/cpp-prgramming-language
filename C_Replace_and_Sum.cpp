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
ll n,q;
cin>>n>>q;
vector<ll>v1;
vector<ll>v2;
for(ll i=0;i<n;i++){
ll x;
cin>>x;
v1.emplace_back(x);
}

for(ll i=0;i<n;i++){
ll x;
cin>>x;
v2.emplace_back(x);
}

for(ll i=0;i<n;i++){
    if(v1[i]<v2[i]){
        v1[i]=v2[i];
    }
}

for(ll i=n-1;i>0;i--){
    if(v1[i]>v1[i-1]){
        v1[i-1]=v1[i];
    }
}

vector<ll>pre;
ll sum=0;
for(auto x:v1){
    sum+=x;
    pre.push_back(sum);
}
for(ll i=0;i<q;i++){
    ll l,r;
    cin>>l>>r;
    ll ans=0;
    if(l>1)
    ans=pre[r-1]-pre[l-2];
    else
    ans=pre[r-1];
    cout<<ans<<" ";
}
cout<<endl;


}

return 0;
}