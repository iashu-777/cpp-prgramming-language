#include <bits/stdc++.h>
using namespace std;

const int MAXA = 1e6 + 5;
bool isPrime[MAXA];

void sieve() {
    fill(isPrime, isPrime + MAXA, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < MAXA; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < MAXA; j += i)
                isPrime[j] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool sorted = true;
        for (int i = 0; i + 1 < n; i++) {
            if (a[i] > a[i + 1]) {
                sorted = false;
                break;
            }
        }

        if (sorted) {
            cout << "Bob\n";
            continue;
        }

        bool aliceWins = false;

        for (int i = 0; i + 1 < n; i++) {
            if (a[i] > a[i + 1] && isPrime[a[i]]) {
                aliceWins = true;
                break;
            }
        }

        if (aliceWins)
            cout << "Alice\n";
        else
            cout << "Bob\n";
    }

    return 0;
}