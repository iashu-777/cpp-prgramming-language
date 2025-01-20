#include <iostream>
#include <vector>
#include <algorithm>
#define MOD 998244353
using namespace std;

// Precompute up to max_k for all products using dynamic programming
vector<vector<long long>> precompute_up_to(int max_k, int max_n) {
    vector<vector<long long>> dp(max_k + 1, vector<long long>(10, 0)); // Up to n = 9
    dp[1][1] = 1; // Base case: product of 1 with one element

    for (int len = 2; len <= 9; ++len) {
        for (int x = 1; x <= max_k; ++x) {
            for (int factor = 1; factor <= x; ++factor) {
                if (x % factor == 0) {
                    dp[x][len] = (dp[x][len] + dp[x / factor][len - 1]) % MOD;
                }
            }
        }
    }

    vector<vector<long long>> result(max_k + 1, vector<long long>(10, 0));
    for (int x = 1; x <= max_k; ++x) {
        for (int len = 1; len <= 9; ++len) {
            result[x][len] = (result[x][len - 1] + dp[x][len]) % MOD;
        }
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<pair<int, long long>> test_cases(t);
    int max_k = 0;

    for (int i = 0; i < t; ++i) {
        int k;
        long long n;
        cin >> k >> n;
        test_cases[i] = {k, n};
        max_k = max(max_k, k);
    }

    // Precompute counts for all x in range 1 to max_k
    vector<vector<long long>> precomputed_counts = precompute_up_to(max_k, 9);

    for (const auto& [k, n] : test_cases) {
        for (int x = 1; x <= k; ++x) {
            long long count = precomputed_counts[x][min((int)n, 9)];
            cout << count << " ";
        }
        cout << "\n";
    }

    return 0;
}
