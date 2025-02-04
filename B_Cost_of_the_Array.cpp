#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        vector<int> even_index_values; // Values to form the array b
        int part_size = n / k; // Approximate size of each subarray
        
        // Collect the values that will be at even indices of b
        for (int i = 0; i < n; i += 2) {
            even_index_values.push_back(a[i]);
        }

        // Now, form the array b by processing even-indexed subarrays
        int cost = n + 1; // Initially set to a large number
        
        for (int i = 0; i < even_index_values.size(); ++i) {
            if (even_index_values[i] != (i + 1)) {
                cost = i + 1;
                break;
            }
        }

        cout << cost << '\n';
    }
    
    return 0;
}
    