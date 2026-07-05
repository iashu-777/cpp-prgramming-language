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
bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0);}







int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int>a(n), b(n), c(n);
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];
        for(int i=0;i<n;i++) cin >> c[i];

        long long goodAB = 0, goodBC = 0;

        for(int d=0; d<n; d++){
            bool ok = true;
            for(int x=0; x<n; x++){
                if(a[x] >= b[(x+d)%n]){
                    ok = false;
                    break;
                }
            }
            if(ok) goodAB++;
        }

        for(int d=0; d<n; d++){
            bool ok = true;
            for(int x=0; x<n; x++){
                if(b[x] >= c[(x+d)%n]){
                    ok = false;
                    break;
                }
            }
            if(ok) goodBC++;
        }

        long long ans = (long long)n * goodAB * goodBC;
        cout << ans << "\n";
    }
    return 0;
}
