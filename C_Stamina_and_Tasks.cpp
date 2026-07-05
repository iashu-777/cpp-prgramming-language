#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Global DP array
double dp[100005];

double func(int i, int n, vector<ll>& task, vector<ll>& diff) {
    if (i == n) return 0;

    if (dp[i] > -0.5) return dp[i];

    double skip = func(i + 1, n, task, diff);

    double r = 1.0 - (diff[i] / 100.0);
    double take = (double)task[i] + r * func(i + 1, n, task, diff);

    return dp[i] = max(skip, take);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> task(n), diff(n);
        for (int i = 0; i < n; i++) {
            cin >> task[i] >> diff[i];
            dp[i] = -1.0; 
        }
        dp[n] = -1.0;

        double result = func(0, n, task, diff);
        
        cout << fixed << setprecision(10) << result << "\n";
    }
    return 0;
}