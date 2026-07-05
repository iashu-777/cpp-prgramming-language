#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b, n;
        cin >> a >> b >> n;

        long long K = a / b;   // floor(a / b)

        long long ans = max(1LL, n - K);
        cout << ans << "\n";
    }
    return 0;
}
