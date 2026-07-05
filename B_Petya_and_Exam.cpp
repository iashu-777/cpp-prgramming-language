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
long long countDivisors(long long n)
{
    long long c = 0;
    for (long long i = 1; i * i <= n; i++)
        if (n % i == 0)
            c += (i == n / i ? 1 : 2);
    return c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    unordered_map<char, ll> mpp;
    for (auto x : s)
        mpp[x]++;

    string t;
    cin >> t;
    ll n;
    cin >> n;
    for (ll j = 0; j < n; j++)
    {
        string k;
        // getline(cin,k);
        cin >> k;
        ll flag = 0;
        if (t.size() == k.size())
        {
            // * ki jagah bad letter hoga
            for (ll i = 0; i < t.size(); i++)
            {
                if (k[i] != t[i])
                {
                    if (t[i] == '?')
                    {
                        if (mpp.find(k[i]) != mpp.end())
                        {
                            continue;
                        }
                        else
                        {
                            flag = 1;
                            break;
                        }
                    }
                    else if (t[i] == '*')
                    {
                        if (mpp.find(k[i]) == mpp.end())
                        {
                            continue;
                        }
                        else
                        {
                            flag = 1;
                            break;
                        }
                    }
                    else
                    {
                        flag = 1;
                        break;
                    }
                }
            }
        }
        else if (k.size() == t.size() - 1)
        {
            string t1 = t;
            if (t1.find('*') != string::npos)
            {
                t1.erase(t1.find('*'),1);
            }
            else
            {
                flag = 1;
            }

            for (ll i = 0; i < t1.size(); i++)
            {
                if (k[i] != t1[i])
                {
                    if (t1[i] == '?')
                    {
                        if (mpp.find(k[i]) != mpp.end())
                        {
                            continue;
                        }
                        else
                        {
                            flag = 1;
                            break;
                        }
                    }

                    else
                    {
                        flag = 1;
                        break;
                    }
                }
            }
        }
        else
        {
            flag = 1;
        }
        if (flag == 1)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
        cout << endl;
    }
    return 0;
}