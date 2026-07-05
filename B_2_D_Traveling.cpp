#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
 ll findIndex(const vector<ll>& v, ll key, ll i, ll j){ auto it=lower_bound(v.begin()+i,v.begin()+j+1,key); return (it!=v.begin()+j+1 && *it==key)? it-v.begin():-1; }
long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }
bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0);}
  ll lbound(const vector<ll>& v, ll key, ll i, ll j){ return lower_bound(v.begin()+i, v.begin()+j+1, key) - (v.begin()+i); }

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll func(pair<ll,ll> p, pair<ll,ll> q){
    return abs(p.first-q.first)+abs(p.second-q.second);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,k,a,b;
        cin>>n>>k>>a>>b;
        vector<pair<ll,ll>> v(n + 1);
        for(ll i=1; i<=n; i++){
            cin>>v[i].first>>v[i].second;
        }
        
        // Option 1: Direct flight from a to b
        ll ans = func(v[a], v[b]);
        
        // Option 2: Fly from a to the nearest major city, then to the major city nearest to b
        if(k > 0) {
            ll min_from_a = 1e18; // Use a very large number instead of INT_MAX to avoid overflow
            ll min_to_b = 1e18;
            
            for(ll i=1; i<=k; i++){
                min_from_a = min(min_from_a, func(v[a], v[i]));
                min_to_b = min(min_to_b, func(v[i], v[b]));
            }
            ans = min(ans, min_from_a + min_to_b);
        }
        
        cout << ans << "\n";
    }
    return 0;
}