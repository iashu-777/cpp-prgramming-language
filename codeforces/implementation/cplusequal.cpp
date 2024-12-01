#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        long long a, b, n;
        cin >> a >> b >> n; // Input values
        
        int count = 0;
        while (a <= n && b <= n) {
            if (a < b) {
                a += b;
            } else {
                b += a;
            }
            count++;
        }
        cout << count << endl;
    }
    return 0;
}
