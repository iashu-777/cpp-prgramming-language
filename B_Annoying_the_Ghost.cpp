#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> a(n), b(n);

        loop(0,n,1) cin >> a[i];
        loop(0,n,1) cin >> b[i];

        vector<ll> temp = a;
        sort(temp.begin(), temp.end());

        bool ok = true;

        loop(0,n,1)
        {
            if(temp[i] > b[i])
            {
                ok = false;
                break;
            }
        }

        if(!ok)
        {
            cout << -1 << "\n";
            continue;
        }

        vector<bool> vis(n,false);
        ll ans = 0;

        for(ll j=0;j<n;j++)
        {
            for(ll i=0;i<n;i++)
            {
                if(!vis[i] && a[i] <= b[j])
                {
                    ll cnt = 0;

                    for(ll k=0;k<i;k++)
                    {
                        if(!vis[k]) cnt++;
                    }

                    ans += cnt;
                    vis[i] = true;
                    break;
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}