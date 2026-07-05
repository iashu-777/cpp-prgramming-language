
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool good(vector<long long>& a) {
    unordered_map<long long, int> first, last;

    for (int i = 0; i < (int)a.size(); i++) {
        if (!first.count(a[i])) first[a[i]] = i;
        last[a[i]] = i;
    }

    // for (auto &[x, l] : first) {
    //     int r = last[x];
    //     for (int i = l; i <= r; i++) {
    //         if (a[i] != x) return false;
    //     }
    // }
    for (auto p : first) {
    long long x = p.first;
    int l = p.second;

    int r = last[x];

    for (int i = l; i <= r; i++) {
        if (a[i] != x) return false;
    }
}

    return true;
}

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);

    int tstCNum;
    cin >> tstCNum;

    for (ll tt=1;tt<=tstCNum;tt++) {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++) cin >> a[i];
// if(tstCNum==10000 && tt==801){

//     cout<<"hi";
//     for(auto x:a){
//         cout<<x<<"@";
//     }
//     cout<<"HI";
// }
        if (good(a)) {
            cout << "YES\n";
            continue;
        }

        int aPos = 0;
        while (aPos + 1 < n && a[aPos + 1] == a[0]) aPos++;

        int bPos = n - 1;
        while (bPos - 1 >= 0 && a[bPos - 1] == a[n - 1]) bPos--;

        bool ok = false;

        if (aPos + 1 < n && bPos < n && aPos + 1 != bPos) {
            swap(a[aPos + 1], a[bPos]);
            if (good(a)) ok = true;
            swap(a[aPos + 1], a[bPos]);
        }

        if (!ok && aPos >= 0 && bPos - 1 >= 0 && aPos != bPos - 1) {
            swap(a[aPos], a[bPos - 1]);
            if (good(a)) ok = true;
            swap(a[aPos], a[bPos - 1]);
        }
        if (!ok && aPos + 1 < n && bPos - 2 >= 0 &&
    aPos + 1 != bPos - 2) {

    swap(a[aPos + 1], a[bPos - 2]);

    if (good(a)) ok = true;

    swap(a[aPos + 1], a[bPos - 2]);
}

if (!ok && aPos + 2 < n && bPos - 1 >= 0 &&
    aPos + 2 != bPos - 1) {

    swap(a[aPos + 2], a[bPos - 1]);

    if (good(a)) ok = true;

    swap(a[aPos + 2], a[bPos - 1]);
}
if (!ok && aPos != bPos) {

    swap(a[aPos], a[bPos]);

    if (good(a)) ok = true;

    swap(a[aPos], a[bPos]);
}
if (!ok && bPos >= 0 && bPos < n) {
    swap(a[0], a[bPos]);

    if (good(a)) ok = true;

    swap(a[0], a[bPos]);
}

if (!ok && aPos >= 0 && aPos < n) {
    swap(a[aPos], a[n - 1]);

    if (good(a)) ok = true;

    swap(a[aPos], a[n - 1]);
}
if (!ok && bPos - 1 >= 0 && 0 != bPos - 1) {
    swap(a[0], a[bPos - 1]);

    if (good(a)) ok = true;

    swap(a[0], a[bPos - 1]);
}

if (!ok && aPos + 1 < n && aPos + 1 != n - 1) {
    swap(a[aPos + 1], a[n - 1]);

    if (good(a)) ok = true;

    swap(a[aPos + 1], a[n - 1]);
}
        cout << (ok ? "YES" : "NO") << '\n';
    }
}