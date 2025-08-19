// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 998244353
// #define loop(a,b,c) for(ll i=a;i<b;i+=c)
// ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

// int factorial(int n) {
//     if (n == 0)
//         return 1;
//     else
//         return n * factorial(n - 1);
// }

// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// ll a,b;
// cin>>a>>b;
// cout<<((b+1)*(b+2))/2;

// return 0;
// }

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll C2(ll n) {
    if (n < 0) return 0;
    return n * (n - 1) / 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll K, S;
    cin >> K >> S;

    ll ans = 0;
    ans  = C2(S + 2);
    ans -= 3 * C2(S - K + 1);
    ans += 3 * C2(S - 2*K);
    ans -= 1 * C2(S - 3*K - 1);

    cout << ans << "\n";
}
