#include <bits/stdc++.h>
using namespace std;

// Finds the last index j where arr[j] == arr[start]
int findSegmentEnd(const vector<int>& arr, int start, int n) {
    int j = start + 1;
    while (j < n && arr[j] == arr[start]) j++;
    return j - 1;
}

// Handles the update logic for even-length segments
int handleEvenSegment(vector<int>& arr, int i, int j) {
    // arr[i] == arr[j] since it's a uniform segment
    int val = arr[i];

    if (val == 0) {
        if (i > 0 && arr[i - 1] == val + 1) {
            arr[j]++;
            return j - 1;
        }
        return j;
    }

    arr[j]++;
    return j;
}

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int& x : arr) cin >> x;

    int cnt = 0;

    for (int i = 0; i < n - 1; i++) {

        if (arr[i] == arr[i + 1]) {

            int j = findSegmentEnd(arr, i, n);
            int len = j - i + 1;

            cnt += len / 2;

            if (len % 2 == 0)
                i = handleEvenSegment(arr, i, j);
            else
                i = j;
        }
    }

    cout << cnt << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
