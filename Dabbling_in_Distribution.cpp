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
ll findIndex(const vector<ll> &v, ll key, ll i, ll j)
{
    auto it = lower_bound(v.begin() + i, v.begin() + j + 1, key);
    return (it != v.begin() + j + 1 && *it == key) ? it - v.begin() : -1;
}
long long countDivisors(long long n)
{
    long long c = 0;
    for (long long i = 1; i * i <= n; i++)
        if (n % i == 0)
            c += (i == n / i ? 1 : 2);
    return c;
}
bool isPowerOftwo(ll n) { return (n > 0) && ((n & (n - 1)) == 0); }
ll lbound(const vector<ll> &v, ll key, ll i, ll j) { return lower_bound(v.begin() + i, v.begin() + j + 1, key) - (v.begin() + i); }

void solve()
{
    int n;
    if (!(cin >> n))
        return;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    vector<long long> pref_sum(n + 1, 0);
    vector<long long> pref_max_diff(n + 1, -1e18);

    for (int i = 0; i < n; ++i)
    {
        pref_sum[i + 1] = pref_sum[i] + a[i];
        pref_max_diff[i + 1] = max(pref_max_diff[i], a[i] - (i + 1));
    }

    for (int k = 1; k <= n; ++k)
    {
        int l = n - k;
        if (l == 0)
        {
            cout << 0 << endl;
            return;
        }
        if (pref_sum[l] <= (long long)l * k && pref_max_diff[l] <= k - 1)
        {
            cout << l << endl;
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}