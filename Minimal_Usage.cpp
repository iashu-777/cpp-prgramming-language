#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

/*
Check if it is possible to form total sum S using:
x cakes of weight M
(K-x) cakes having weight != M
*/
bool is_possible(ll x, ll N, ll K, ll S, ll M) {

    ll other = K - x;           // cakes that are NOT weight M
    ll remaining = S - x * M;   // sum we still need to build

    // If all cakes are M
    if (other == 0) return remaining == 0;

    if (remaining < 0) return false;

    // ---- Case 1 : M = 1 ----
    // possible weights = [2 ... N]
    if (M == 1) {
        return (remaining >= 2 * other && remaining <= N * other);
    }

    // ---- Case 2 : M = N ----
    // possible weights = [1 ... N-1]
    if (M == N) {
        return (remaining >= other && remaining <= (N - 1) * other);
    }

    // ---- Case 3 : general case ----
    // weights allowed:
    // [1 ... M-1] and [M+1 ... N]

    // All cakes from lower range
    if (remaining >= other && remaining <= other * (M - 1))
        return true;

    // All cakes from higher range
    if (remaining >= other * (M + 1) && remaining <= other * N)
        return true;

    // Mixed case: some < M and some > M
    if (other < 2) return false;

    /*
    Suppose:
    b cakes are > M
    (other - b) cakes are < M

    Possible sum range becomes:
    lower = other + b*M
    upper = other*(M-1) + b*(N-M+1)
    */

    ll den = N - M + 1;

    // minimum b required
    ll b_min = (remaining - other * (M - 1) + den - 1) / den;

    // maximum b allowed
    ll b_max = (remaining - other) / M;

    return (max(1LL, b_min) <= min(other - 1, b_max));
}

void solve() {

    ll N, K, S, M;
    cin >> N >> K >> S >> M;

    // Binary search for minimum x
    ll low = 0, high = K;
    ll ans = K;

    while (low <= high) {

        ll mid = (low + high) / 2;

        if (is_possible(mid, N, K, S, M)) {
            ans = mid;
            high = mid - 1;
        } 
        else {
            low = mid + 1;
        }
    }

    cout << ans << "\n";
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}