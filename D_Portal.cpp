// // #include <bits/stdc++.h>
// // using namespace std;

// // void solve() {
// //     int n, x, y;
// //     cin >> n >> x >> y;

// //     vector<int> p(n);
// //     for (int i = 0; i < n; i++) cin >> p[i];

// //     deque<int> left, mid, right;

// //     // fill three parts
// //     for (int i = 0; i < x; i++)
// //         left.push_back(p[i]);

// //     for (int i = x; i < y; i++)
// //         mid.push_back(p[i]);

// //     for (int i = y; i < n; i++)
// //         right.push_back(p[i]);

// //     // We simulate greedily:
// //     // Always try to push smallest possible element toward front part

// //     while (true) {
// //         int best = INT_MAX;
// //         int type = -1;

// //         // 4 possible moves:

// //         // 1) portal1 left -> portal2 right
// //         if (!left.empty())
// //             if (left.back() < best)
// //                 best = left.back(), type = 1;

// //         // 2) portal2 left -> portal1 right
// //         if (!mid.empty())
// //             if (mid.back() < best)
// //                 best = mid.back(), type = 2;

// //         // 3) portal1 right -> portal2 left
// //         if (!mid.empty())
// //             if (mid.front() < best)
// //                 best = mid.front(), type = 3;

// //         // 4) portal2 right -> portal1 left
// //         if (!right.empty())
// //             if (right.front() < best)
// //                 best = right.front(), type = 4;

// //         if (type == -1) break;

// //         if (type == 1) {
// //             int val = left.back();
// //             left.pop_back();
// //             right.push_front(val);
// //         }
// //         else if (type == 2) {
// //             int val = mid.back();
// //             mid.pop_back();
// //             left.push_back(val);
// //         }
// //         else if (type == 3) {
// //             int val = mid.front();
// //             mid.pop_front();
// //             right.push_front(val);
// //         }
// //         else if (type == 4) {
// //             int val = right.front();
// //             right.pop_front();
// //             left.push_back(val);
// //         }
// //     }

// //     // Print final sequence
// //     for (auto v : left) cout << v << " ";
// //     for (auto v : mid) cout << v << " ";
// //     for (auto v : right) cout << v << " ";
// //     cout << "\n";
// // }

// // int main() {
// //     ios::sync_with_stdio(false);
// //     cin.tie(NULL);

// //     int t;
// //     cin >> t;
// //     while (t--) solve();
// // }


// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 998244353
// #define loop(a,b,c) for(ll i=a;i<b;i+=c)
// ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
// ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
// vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
//  ll lbound(vector<ll>v,ll x){ ll k= lower_bound(v.begin(), v.end(), x) - v.begin();return k;}
// long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }
// bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0);}






// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int a;
//     cin >> a;
//     for (int b = 0; b < a; ++b) {
//         int c, d, e;
//         cin >> c >> d >> e;
//         vector<int> v(c);
//         for (int f = 0; f < c; ++f) {
//             cin >> v[f];
//         }
        
//         vector<int> g(v.begin() + d, v.begin() + e);
//         vector<int> h;
//         h.insert(h.end(), v.begin(), v.begin() + d);
//         h.insert(h.end(), v.begin() + e, v.end());
        
//         int i = h.size();
//         int j = g.size();
        
//         if (j == 0) {
//             for (int f = 0; f < c; ++f) {
//                 if (f > 0) cout << " ";
//                 cout << v[f];
//             }
//             cout << "\n";
//             continue;
//         }
        
//         int k = *min_element(g.begin(), g.end());
//         auto l = find(g.begin(), g.end(), k);
//         int m = l - g.begin();
        
//         vector<int> n;
//         int o = 0;
//         bool p = false;
        
//         while (!p) {
//             if (o == i) {
//                 for (int f = m; f < j; ++f) n.push_back(g[f]);
//                 for (int f = 0; f < m; ++f) n.push_back(g[f]);
//                 p = true;
//             } else {
//                 int q = h[o];
//                 if (k < q) {
//                     for (int f = m; f < j; ++f) n.push_back(g[f]);
//                     for (int f = 0; f < m; ++f) n.push_back(g[f]);
//                     for (int f = o; f < i; ++f) n.push_back(h[f]);
//                     p = true;
//                 } else {
//                     n.push_back(q);
//                     ++o;
//                 }
//             }
//         }
        
//         for (int f = 0; f < c; ++f) {
//             if (f > 0) cout << " ";
//             cout << n[f];
//         }
//         cout <<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> p(n);
        for (int &val : p) cin >> val;
        vector<int> mid(p.begin() + x, p.begin() + y);
        vector<int> rest;
        rest.insert(rest.end(), p.begin(), p.begin() + x);
        rest.insert(rest.end(), p.begin() + y, p.end());
        if (mid.empty()) {
            for (int i = 0; i < n; i++)
                cout << p[i] << (i + 1 < n ? ' ' : '\n');
            continue;
        }
        int minPos = min_element(mid.begin(), mid.end()) - mid.begin();
        rotate(mid.begin(), mid.begin() + minPos, mid.end());
        vector<int> answer;
        int i = 0;
        while (i < rest.size() && rest[i] < mid[0]) {
            answer.push_back(rest[i]);
            i++;
        }
        answer.insert(answer.end(), mid.begin(), mid.end());
        answer.insert(answer.end(), rest.begin() + i, rest.end());
        for (int j = 0; j < n; j++)
            cout << answer[j] << (j + 1 < n ? ' ' : '\n');
    }
    return 0;
}