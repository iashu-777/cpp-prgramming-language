#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string result; // To store the processed string
    for (char c : s) {
        // Check if the character is a vowel (uppercase or lowercase)
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y' || 
            c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
            continue; // Skip vowels
        }
        // Convert the character to lowercase and append '.' + character to result
        result += '.';
        result += tolower(c);
    }

    cout << result << endl;
    return 0;
}
