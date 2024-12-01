#include <iostream>
#include <vector>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to construct the permutation
void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n == 3) {
            // For n=3, it's impossible to create such a permutation
            cout << -1 << endl;
            continue;
        }

        // Construct the permutation
        vector<int> permutation;
        for (int i = n; i >= 1; i--) {
            permutation.push_back(i);
        }

        // Output the permutation
        for (int num : permutation) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
