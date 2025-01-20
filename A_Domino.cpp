#include <iostream>
using namespace std;

void generatePattern(int n) {
    char currentChar = 'a';  // Start from 'a'

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < n; j++) {
            if (n % 2 == 0) {
                // Even case: Pattern repeats pairs evenly across rows
                cout << (char)(j / 2 % 2 == 0 ? currentChar : currentChar + 1);
            } else {
                // Odd case: Special handling for alternating pairs
                if (j < n - 1) {
                    cout << (char)(j / 2 % 2 == 0 ? currentChar : currentChar + 1);
                } else {
                    cout << (char)(currentChar + 1);  // Use the next character for the last odd column
                }
            }
            if (j % 2 == 1) currentChar += 2;  // Advance characters every two columns
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    if (n < 2) {
        cout << -1<< endl;
    } else {
        generatePattern(n);
    }
    return 0;
}
