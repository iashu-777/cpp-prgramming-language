#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        unordered_set<long long> used_values;
        long long used_mask = 0;
        int ans = 0;

        for (long long x : a) {
            if (used_values.count(x)) {
                // Duplicate → always allowed
                ans++;
            }
            else if ((used_mask & x) == 0) {
                // No bit conflict → allowed
                used_values.insert(x);
                used_mask |= x;
                ans++;
            }
            // else skip x
        }

        cout << ans << "\n";
    }
    return 0;
}
