#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> v; // Store the value and its original index
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        v.push_back({k, i + 1});
    }

    // Sort by value, then by index
    sort(v.begin(), v.end());

    map<int, int> diff; // To store the consistent difference for each value
    map<int, bool> valid; // To mark if the value has consistent differences

    for (int i = 0; i < n; i++) {
        if (i > 0 && v[i].first == v[i - 1].first) {
            int current_diff = v[i].second - v[i - 1].second;
            if (diff.find(v[i].first) == diff.end()) {
                diff[v[i].first] = current_diff; // First difference
                valid[v[i].first] = true; // Mark as valid
            } else if (diff[v[i].first] != current_diff) {
                valid[v[i].first] = false; // Mark as invalid
            }
        } else {
            if (diff.find(v[i].first) == diff.end()) {
                diff[v[i].first] = 0; // For unique values
                valid[v[i].first] = true;
            }
        }
    }

    vector<pair<int, int>> result;
    for (auto& entry : diff) {
        if (valid[entry.first]) {
            result.push_back({entry.first, entry.second});
        }
    }

    // Print the results
    cout << result.size() << endl;
    for (auto& p : result) {
        cout << p.first << " " << p.second << "\n";
    }

    return 0;
}
