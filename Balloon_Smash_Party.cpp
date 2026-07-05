#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }
bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0);}






void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<int> a(n + 1);
    vector<vector<int>> to_leave(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        to_leave[a[i]].push_back(i);
    }

    vector<int> balloons(n + 1, 0);
    vector<bool> in_party(n + 1, true);
    int turns_taken = 0;

    for (int i = 1; i <= n; i++) {
        if (in_party[i]) {
            balloons[i] = turns_taken;
            in_party[i] = false; 
            turns_taken++;
            
            if (turns_taken <= n) {
                for (int j : to_leave[turns_taken]) {
                    if (in_party[j]) {
                        balloons[j] = turns_taken;
                        in_party[j] = false;
                    }
                }
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << balloons[i] << (i == n ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}