#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a, b, c) for (ll i = a; i < b; i += c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll sum_of_digits(ll n)
{
    ll s = 0;
    for (; n; n /= 10)
        s += n % 10;
    return s;
}
vector<bool> sieve(ll n)
{
    vector<bool> v(n + 1, 1);
    v[0] = v[1] = 0;
    for (ll i = 2; i * i <= n; i++)
        if (v[i])
            for (ll j = i * i; j <= n; j += i)
                v[j] = 0;
    return v;
}
ll lbound(vector<ll> v, ll x)
{
    ll k = lower_bound(v.begin(), v.end(), x) - v.begin();
    return k;
}
long long countDivisors(long long n) {
    long long cnt = 0;
    ll co=0;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            if(i%2==0){
                co++;
            }                  // divisor i
            if (i != n / i){
                 cnt++;
                 if((n/i)%2==0){
                    co++;
                 }
            }  // divisor n/i (avoid double counting when i*i == n)
        }
    }
    return co;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<countDivisors(n)<<endl;
    }
    return 0;
}