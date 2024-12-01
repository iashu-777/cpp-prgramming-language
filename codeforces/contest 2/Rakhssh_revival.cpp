#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;

        int op = 0;
        int i = 0;

        while (i < n) {
            if (s[i] == '0') {
                // Find the length of the segment of zeros
                int j = i;
                while (j < n && s[j] == '0') {
                    j++;
                }
                int segment_length = j - i;

                // Calculate operations required for this segment
                if (segment_length >= m) {
                    int groups = segment_length / m; // Full groups of size 'm'
                    op += (groups + k - 1) / k;     // Divide into k operations
                }

                i = j; // Move to the next segment
            } else {
                i++; // Skip non-zero characters
            }
        }

        cout << op << endl;
    }

    return 0;
}
