#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Sort the array to maximize the outcome
        sort(a.begin(), a.end());

        // The strategy to maximize x is to always combine the smallest and largest numbers.
        int maxElement = a.back(); // The largest element initially
        for (int i = 0; i < n - 1; ++i) {
            int smallest = a[i];
            maxElement = (maxElement + smallest) / 2; // Update maxElement
        }

        cout << maxElement << "\n";
    }

    return 0;
}
