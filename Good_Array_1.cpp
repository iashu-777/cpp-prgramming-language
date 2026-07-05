#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int memo[505][505];
int arr[505];


int solve(int i, int j) {
    if (i >= j) {
        return 0;
    }

    if (memo[i][j] != -1) {
        return memo[i][j];
    }

    int min_changes = 1e9;

    for (int k = i; k <= j; k++) {
       
        bool is_unique = true;
        for (int m = i; m <= j; m++) {
            if (m != k && arr[m] == arr[k]) {
                is_unique = false;
                break;
            }
        }

    
        int cost = (is_unique ? 0 : 1);

      
        int current_total = cost + solve(i, k - 1) + solve(k + 1, j);
        
        min_changes = min(min_changes, current_total);
    }

    return memo[i][j] = min_changes;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= n; j++) {
                memo[i][j] = -1;
            }
        }

        cout << solve(0, n - 1) << "\n";
    }

    return 0;
}