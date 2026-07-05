#include<bits/stdc++.h>
using namespace std;
#define ll long long
// #define mod 1000000007
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
 ll findIndex(const vector<ll>& v, ll key, ll i, ll j){ auto it=lower_bound(v.begin()+i,v.begin()+j+1,key); return (it!=v.begin()+j+1 && *it==key)? it-v.begin():-1; }
long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }
bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0);}
  ll lbound(const vector<ll>& v, ll key, ll i, ll j){ return lower_bound(v.begin()+i, v.begin()+j+1, key) - (v.begin()+i); }





int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
ll mod = 1000000007;
ll inv2 = 500000004;     // inverse of 2
ll inv6 = 166666668;    // inverse of 6

while(t--){
    ll n;
    cin >> n;
    ll c = n - 1;

    ll a = c % mod;
    a = a * ((c + 1) % mod) % mod;
    a = a * ((2*c + 1) % mod) % mod;
    a = a * inv6 % mod;

    ll a1 = n % mod;
    a1 = a1 * ((n + 1) % mod) % mod;
    a1 = a1 * ((2*n + 1) % mod) % mod;
    a1 = a1 * inv6 % mod;

    ll b = c % mod;
    b = b * ((c + 1) % mod) % mod;
    b = b * inv2 % mod;

    ll ans = (a + a1 + b) % mod;
    ans = ans * 2022 % mod;

    cout << ans << endl;
}
return 0;
}