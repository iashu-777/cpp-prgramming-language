#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a, b, c) for (ll i = a; i < b; i += c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    deque< pair<ll, ll> > dq;

    while (t--) {
        ll type;
        cin >> type;

        if (type == 1) {
            ll a, b;
            cin >> a >> b;
            dq.push_back(make_pair(b, a));
        } else {
            ll f;
            cin >> f;
            ll sum = 0;

            while (f > 0 && !dq.empty()) {
                pair<ll, ll> front = dq.front();
                dq.pop_front();

                ll take = min(front.second, f);
                sum += take * front.first;
                f -= take;

                if (front.second > take) {
                    dq.push_front(make_pair(front.first, front.second - take));
                }
            }

            cout << sum << '\n';
        }
    }

    return 0;
}
