// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// /**
//  * The core idea is to maintain the best possible good subsequence length 
//  * ending before the current occurrence of a specific value.
//  */
// void solve() {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     // dp[i] = max good subsequence length using first i elements
//     vector<int> dp(n + 1, 0);
//     // prev_best[v] = max dp value seen before an occurrence of value v
//     // Initialize with -1 to indicate the value hasn't been seen yet
//     vector<int> prev_best(n + 1, -1);

//     for (int i = 0; i < n; i++) {
//         int val = a[i];
        
//         // Option 1: Don't include a[i] as the second element of a pair
//         dp[i + 1] = dp[i];

//         // Option 2: If we've seen this value before, try forming a pair
//         if (prev_best[val] != -1) {
//             dp[i + 1] = max(dp[i + 1], prev_best[val] + 2);
//         }

//         // Update prev_best for future occurrences of this value.
//         // We take the current dp[i] because it represents the max length
//         // available BEFORE this current index i.
//         prev_best[val] = max(prev_best[val], dp[i]);
//     }

//     cout << dp[n] << "\n";
// }

// int main() {
//     // Fast I/O
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
 ll lbound(vector<ll>v,ll x){ ll k= lower_bound(v.begin(), v.end(), x) - v.begin();return k;}
long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }
bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0);}


void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> dp(n + 1, 0);
    vector<int> prev_best(n + 1, -1);

    for (int i = 0; i < n; i++) {
        int val = a[i];
        
        dp[i + 1] = dp[i];

        if (prev_best[val] != -1) {
            dp[i + 1] = max(dp[i + 1], prev_best[val] + 2);
        }

        
        prev_best[val] = max(prev_best[val], dp[i]);
    }

    cout << dp[n] << "\n";
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
   
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}