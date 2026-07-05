#include <bits/stdc++.h>
using namespace std;

static int min_ops(const vector<int>& a) {
    int n = (int)a.size();
    string s(n, '\0'), g(n, '\0');
    for (int i = 0; i < n; ++i) s[i] = char(a[i]);
    for (int i = 0; i < n; ++i) g[i] = char(i);
    if (s == g) return 0;

    vector<array<int,3>> mv;
    mv.reserve(n * n * n);
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            int ln = j - i;
            for (int k = 0; k <= n - ln; ++k) {
                if (k == i) continue;
                mv.push_back({i, j, k});
            }
        }
    }

    deque<string> q1, q2;
    unordered_map<string,int> d1, d2;
    q1.push_back(s); d1.emplace(s, 0);
    q2.push_back(g); d2.emplace(g, 0);

    auto expand = [&](deque<string>& q, unordered_map<string,int>& dself,
                      unordered_map<string,int>& dother) -> int {
        int m = (int)q.size();
        while (m--) {
            string x = q.front(); q.pop_front();
            int dx = dself[x];
            for (auto &t : mv) {
                int i = t[0], j = t[1], k = t[2];
                int ln = j - i;
                string b = x.substr(i, ln);
                string r = x.substr(0, i) + x.substr(j);
                string y = r.substr(0, k) + b + r.substr(k);
                if (dself.find(y) != dself.end()) continue;
                int nd = dx + 1;
                auto it = dother.find(y);
                if (it != dother.end()) return nd + it->second;
                dself.emplace(y, nd);
                q.push_back(y);
            }
        }
        return -1;
    };

    while (!q1.empty() && !q2.empty()) {
        if (q1.size() <= q2.size()) {
            int ans = expand(q1, d1, d2);
            if (ans != -1) return ans;
        } else {
            int ans = expand(q2, d2, d1);
            if (ans != -1) return ans;
        }
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;
    string line;
    getline(cin, line);          
    getline(cin, line);          
    vector<string> sh(n), og(n);
    for (int i = 0; i < n; ++i) getline(cin, sh[i]);
    getline(cin, line);         
    for (int i = 0; i < n; ++i) getline(cin, og[i]);

    unordered_map<string,int> mp;
    mp.reserve(n * 2);
    for (int i = 0; i < n; ++i) mp[og[i]] = i;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) a[i] = mp[sh[i]];

    cout << min_ops(a) << "\n";
    return 0;
}