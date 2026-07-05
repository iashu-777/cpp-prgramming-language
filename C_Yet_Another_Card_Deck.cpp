#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(v1,b,c) for(ll i=v1;i<b;i+=c)
ll gcd(ll v1, ll b) { return b ? gcd(b, v1 % b) : v1; }
ll lcm(ll v1, ll b) { return (v1 / gcd(v1, b)) * b; }
ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
 ll lbound(vector<ll>v,ll x){ ll k= lower_bound(v.begin(), v.end(), x) - v.begin();return k;}
long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }
bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0);}





int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n,q;
cin>>n>>q;
vector<ll>v1;
for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v1.push_back(x);
}
for(ll i=0;i<q;i++){
    ll x;
    cin>>x;
    auto it=find(v1.begin(),v1.end(),x);
    cout<<it-v1.begin()+1<<" ";
    // v1.erase(it);
    // v1.insert(v1.begin(),x);
     rotate(v1.begin(), v1.begin() + (it-v1.begin()), v1.begin() + (it-v1.begin()) + 1);

}

return 0;
}