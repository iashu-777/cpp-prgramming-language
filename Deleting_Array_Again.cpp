#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        vector<long long> A(N), C(N);
        for (int i = 0; i < N; i++) cin >> A[i];
        for (int i = 0; i < N; i++) cin >> C[i];

        vector<vector<long long>> dp(N, vector<long long>(N, 0));

        // base case
        for (int i = 0; i < N; i++) {
            dp[i][i] = A[i] * C[N - 1];
        }

        // increasing length
        for (int len = 2; len <= N; len++) {
            int cidx = N - len;
            for (int l = 0; l + len - 1 < N; l++) {
                int r = l + len - 1;

                dp[l][r] = min(
                    A[l] * C[cidx] + dp[l + 1][r],
                    A[r] * C[cidx] + dp[l][r - 1]
                );
            }
        }

        cout << dp[0][N - 1] << "\n";
    }
    return 0;
}
