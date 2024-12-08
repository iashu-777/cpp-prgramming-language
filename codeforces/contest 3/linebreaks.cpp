#include <bits/stdc++.h>
using namespace std;

int maxWordsOnStrip(int n, int m, vector<string> &words) {
    int count = 0;
    for (const string &word : words) {
        if (word.size() > m) {
            break; 
        }
        if (m >= word.size()) {
            count++;
            m -= word.size();
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> words(n);
        for (int i = 0; i < n; i++) {
            cin >> words[i];
        }
        cout << maxWordsOnStrip(n, m, words) << endl;
    }
    return 0;
}
