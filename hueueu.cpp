#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1e9 + 7;
const int MAX_K = 1000000;

int main() {
    // Optimize I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // Precompute X and A
    vector<long long> X(MAX_K + 1, 0);
    vector<long long> A(MAX_K + 1, 0);

    // Base cases for X
    // X[1]=0, X[2]=0, X[3]=0, X[4]=1, X[5]=3
    if (MAX_K >= 1) X[1] = 0;
    if (MAX_K >= 2) X[2] = 0;
    if (MAX_K >= 3) X[3] = 0;
    if (MAX_K >= 4) X[4] = 1;
    if (MAX_K >= 5) X[5] = 3;

    for (int i = 6; i <= MAX_K; ++i) {
        X[i] = (2 * X[i-1] + X[i-4]) % MOD;
    }

    for (int i = 1; i <= MAX_K; ++i) {
        A[i] = (X[i] * (X[i] + 1)) % MOD;
    }

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int k;
        cin >> k;
        cout << A[k] << "\n";
    }

    return 0;
}