#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    
    vector<int> posA, posB;
    for (int i = 0; i < n; ++i) {
        if (a[i] == '1') posA.push_back(i);
        if (b[i] == '1') posB.push_back(i);
    }
    
    if (posA.size() != posB.size()) {
        cout << -1 << "\n";
        return;
    }
    
    int ans = 0;
    for (size_t i = 0; i < posA.size(); ++i) {
        if (posA[i] != posB[i]) {
            ans++;
        }
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}