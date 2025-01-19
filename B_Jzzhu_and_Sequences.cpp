#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ll calculateTerm(ll x, ll y, ll n) {
    // Modulo pattern-based direct result
    ll terms[6];
    terms[0] = x % mod;
    terms[1] = y % mod;
    terms[2] = (y - x + mod) % mod;
    terms[3] = (-x + mod) % mod;
    terms[4] = (-y + mod) % mod;
    terms[5] = (x - y + mod) % mod;
    
    return terms[(n - 1) % 6];  // (n-1) because array is 0-indexed
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll x, y, n;
    cin >> x >> y >> n;
    
    ll result = (calculateTerm(x, y, n) + mod) % mod;  // Ensure positive result
    cout << result << endl;
    
    return 0;
}
