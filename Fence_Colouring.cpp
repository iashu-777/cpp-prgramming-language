#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        unordered_map<int, int> freq;
        int maxFreq = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            maxFreq = max(maxFreq, ++freq[arr[i]]);
        }

        // If the initial color (1) has max frequency, no need for a global paint
        if (freq[1] == maxFreq) {
            cout << n - maxFreq << "\n";
        } else {
            cout << 1 + (n - maxFreq) << "\n";
        }
    }
    return 0;
}
