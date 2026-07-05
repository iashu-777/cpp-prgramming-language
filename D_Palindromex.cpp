#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

/**
 * Problem Analysis:
 * A subarray is a palindrome if for every element at index i, its mirror index j
 * (relative to the center) has the same value. Since every integer appears exactly twice
 * in the entire array, for a palindromic subarray centered at some sum S (where i + j = S):
 * 1. If an integer x appears twice in the subarray, its positions must sum to S.
 * 2. If an integer x appears once, it must be the center (i.e., 2 * pos = S). 
 *    There can be at most one such integer.
 * 
 * To maximize MEX, we look for the largest M such that [0, 1, ..., M-1] are present.
 * This means 0 must be in the palindrome. Thus, S must be either:
 * - The sum of the two positions of 0 (S = pos1[0] + pos2[0]).
 * - Twice one of the positions of 0 (S = 2 * pos1[0] or S = 2 * pos2[0]).
 */

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    vector<vector<int>> pos(n);
    for (int i = 1; i <= 2 * n; ++i) {
        int val;
        cin >> val;
        pos[val].push_back(i);
    }

    auto get_mex = [&](int S) {
        int k = 0;
        int center_idx = -1;
        
        // Find how many consecutive integers [0, k-1] can fit this center S
        while (k < n) {
            int s_pair = pos[k][0] + pos[k][1];
            if (s_pair == S) {
                k++;
            } else if (center_idx == -1 && (2 * pos[k][0] == S || 2 * pos[k][1] == S)) {
                center_idx = k;
                k++;
            } else {
                break;
            }
        }

        int L = 2 * n + 1, R = 0, current_E = 0;
        int max_m = 0;
        
        // Check prefixes [0, m-1] to find the largest valid palindromic range
        for (int m = 1; m <= k; ++m) {
            int i = m - 1;
            if (i == center_idx) {
                int p = (2 * pos[i][0] == S) ? pos[i][0] : pos[i][1];
                L = min(L, p);
                R = max(R, p);
                current_E += 1;
            } else {
                L = min({L, pos[i][0], pos[i][1]});
                R = max({R, pos[i][0], pos[i][1]});
                current_E += 2;
            }
            
            // If (R - L + 1) == current_E, the range [L, R] contains only the 
            // required instances of values 0 to m-1 and is perfectly symmetric.
            if (R - L + 1 == current_E) {
                max_m = m;
            }
        }
        return max_m;
    };

    // Candidates for the center sum S
    set<int> candidates;
    candidates.insert(pos[0][0] + pos[0][1]);
    candidates.insert(2 * pos[0][0]);
    candidates.insert(2 * pos[0][1]);

    int ans = 0;
    for (int S : candidates) {
        ans = max(ans, get_mex(S));
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}