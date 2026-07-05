#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



bool can_feed(int days, int M, const vector<int>& A) {
    if (days == 0) return true;
    long long total_people_supported = 0;
    for (int units : A) {
        total_people_supported += (units / days);
    }
    return total_people_supported >= M;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    if (!(cin >> N >> M)) return 0;

    vector<int> A(N);
    int max_units = 0;
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        if (A[i] > max_units) max_units = A[i];
    }

    int low = 1, high = max_units;
    int max_days = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (can_feed(mid, M, A)) {
            max_days = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << max_days << endl;

    return 0;
}