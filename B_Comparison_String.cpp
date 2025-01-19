#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> left(n + 1, 1); // Minimum cost array initialized to 1
        vector<int> right(n + 1, 1);

        // Compute left-to-right passes for '<' signs
        for (int i = 1; i <= n; i++) {
            if (s[i - 1] == '<') {
                left[i] = left[i - 1] + 1;
            }
        }

        // Compute right-to-left passes for '>' signs
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '>') {
                right[i] = right[i + 1] + 1;
            }
        }

        int min_cost = 0;
        for (int i = 0; i <= n; i++) {
            min_cost += max(left[i], right[i]);
        }

        cout << min_cost << '\n';
    }

    return 0;
}
