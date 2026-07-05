#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
ll lbound(vector<ll>v,ll x){ ll k= lower_bound(v.begin(), v.end(), x) - v.begin();return k;}
long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }
bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0); }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,k,b,s;
        cin>>n>>k>>b>>s;

        // 🧠 Added feasibility check (only small addition)
        if(s < k*b || s > k*b + n*(k-1)){
            cout << -1 << "\n";
            continue;
        }

        ll rem = s - k*b;  // ✅ fixed: correct remaining value
        vector<ll> v;
        v.push_back(k*b + min(rem, k-1)); // first element ensures beauty b
        rem -= min(rem, k-1);

        ll count = 1;
        while(count < n && rem > 0){
            ll add = min(rem, k-1);
            v.push_back(add);
            rem -= add;
            count++;
        }

        while(v.size() < n){
            v.push_back(0);
        }

        // beauty & sum check (your style)
        ll be=0, sumi=0;
        for(ll i=0;i<v.size();i++){
            be+=(v[i]/k);
            sumi+=v[i];
        }

        if(be!=b || sumi!=s) cout<<-1;
        else{
            for(auto x:v) cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
